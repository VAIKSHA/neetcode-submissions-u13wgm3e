class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        vector<pair<int, vector<int>>> temp;
        for(auto p: arr){
            int d = (p[0] * p[0]) + (p[1] * p[1]);
            temp.push_back({d, p});
        }
        sort(temp.begin(), temp.end());

        vector<vector<int>> ans;
        for(int i=0; i<k; i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
