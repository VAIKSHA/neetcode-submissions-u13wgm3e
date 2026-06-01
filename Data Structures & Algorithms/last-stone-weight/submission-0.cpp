class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        while(n > 1){        
            int a = arr[n-1];
            int b = arr[n-2];
            int temp = a - b;
            arr.pop_back();
            arr.pop_back();
            arr.push_back(temp);
            sort(arr.begin(), arr.end());
            n = arr.size();
        }
        return arr[0];
    }
};
