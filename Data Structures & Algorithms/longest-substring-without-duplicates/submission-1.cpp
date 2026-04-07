class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int left = 0;
        int curr = 0;
        int ans = 0;
        for(int right=0; right < n; right++){
            if(mp.find(s[right]) != mp.end()){
                left = max(left, mp[s[right]]+1);
            }
            mp[s[right]] = right;
            curr = right - left + 1;
            ans = max(ans, curr);
        }
        return ans;
    }
};
