class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> st;
        // for right smaller
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                right[i] = n;
            }
            else {
                right[i] = st.top();
            }
            st.push(i);
        }

        // clear the stack before using for left
        while(!st.empty()) st.pop();

        // for left smaller
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = -1;
            }
            else {
                left[i] = st.top();
            }
            st.push(i);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            int width = right[i] - left[i] - 1;
            int curr = width * arr[i]; // arr[i] -> height of ith bar
            ans = max(ans, curr);
        }
        return ans;
    }
};