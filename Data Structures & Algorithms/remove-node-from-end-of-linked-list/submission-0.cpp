/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        // which element removed = size - n;
        int remove = size - n;
        // base case
        if(remove == 0) return head->next;

        ListNode* curr = head;
        ListNode* prev = NULL;
        int i=0;
        
        while(i != remove){
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;

        return head;
    }
};
