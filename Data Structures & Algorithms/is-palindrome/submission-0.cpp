class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char c : s){
            if(isalnum(c)){
                ans += tolower(c);
            }
        }
        int n = ans.size();
        int st=0; 
        int end=n-1;
        while(st < end){
            if(ans[st] != ans[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
