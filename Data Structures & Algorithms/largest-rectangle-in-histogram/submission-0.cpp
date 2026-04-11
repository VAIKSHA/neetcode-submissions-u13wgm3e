class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int area = 0;
        int curr = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int width = j+1-i;
                int height = *min_element(arr.begin()+i, arr.begin()+j+1);
                curr = height * width;
                area = max(area, curr);
            }
        }
        return area;
    }
};
