class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        for(int i=0; i<n; i++){
            int remain = target - arr[i];
            for(int j=i+1; j<n; j++){
                if(arr[j] == remain){
                    return {i+1, j+1};
                }
            }
        }
        return {};
    }
};
