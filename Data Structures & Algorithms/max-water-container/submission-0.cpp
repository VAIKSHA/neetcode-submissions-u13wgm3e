class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int area = 0;
        int ans = 0;
        int st =0, end = n-1;
        while(st < end){
            int length = end - st;
            int height = min(arr[st], arr[end]);
            area = length * height;
            ans = max(ans, area);
            if(arr[st] < arr[end]){
                st++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};
