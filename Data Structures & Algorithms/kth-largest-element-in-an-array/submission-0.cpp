class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        return arr[n-k];
    }
};
