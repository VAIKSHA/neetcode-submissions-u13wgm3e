class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        for(int i=0; i<n ;i++){
            int count = 1;
            int j = i+1;
            while(j < n){
                if(arr[j] > arr[i]){
                    break;
                }
                j++;
                count++;
            }      
            count = (j == n) ? 0 : count;
            ans[i] = count;
        }
        return ans;
    }
};
