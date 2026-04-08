class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        sort(s1.begin(), s1.end());

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                string sub = s2.substr(i, j-i+1);
                sort(sub.begin(), sub.end());
                if(sub == s1) return true;
            }
        }
        return false;
    }
};
