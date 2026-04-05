class Solution {
public:
    int BS(vector<int> &arr, int st, int end, int remain){
    
        while(st <= end){
            int mid = st + (end - st) / 2;
            if(arr[mid] == remain){
                return mid;
            }
            else if(arr[mid] >= remain){
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int a = 0;
        int b = 0;
        for(int i=0; i<n; i++){
            int remain = target - arr[i];
            a = i;
            b = BS(arr, i, n-1, remain);
            if(b != -1){
                break;
            }
        }
        return {a+1, b+1};
    }
};
