class Solution {
public:
    int evalRPN(vector<string>& arr) {
        int n = arr.size();
        stack<int> st;
        for(int i=0; i<n; i++){
            if(arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/"){
                int right = st.top(); // 2nd operand
                st.pop();
                int left = st.top(); // 1st operand
                st.pop();

                int ans = 0;
                if     (arr[i] == "+") ans = left + right;
                else if(arr[i] == "-") ans = left - right;
                else if(arr[i] == "*") ans = left * right;
                else if(arr[i] == "/") ans = left / right;

                st.push(ans); // calculated 
            }
            else {
                st.push(stoi(arr[i]));
            }
        }
        return st.top();
    }
};
