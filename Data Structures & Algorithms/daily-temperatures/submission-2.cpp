class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=i; j<n; j++){
                if(arr[i] < arr[j]){
                    ans[i] = j - i;
                    break;
                }
            }
        }
        return ans;
    }
};
