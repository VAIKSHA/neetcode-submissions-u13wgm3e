class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        for(int i=0; i<arr1.size(); i++){
            ans.push_back(arr1[i]);
        }
        for(int i=0; i<arr2.size(); i++){
            ans.push_back(arr2[i]);
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        if(n % 2 == 0){
            return (ans[(n/2) - 1] + (ans[n/2])) / 2.0;
        }
        return ans[n/2];
    }
};
