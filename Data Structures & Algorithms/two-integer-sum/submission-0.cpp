class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int remain = 0;
        for(int i=0; i<n; i++){
            remain = target - nums[i];
            if(mp.find(remain) != mp.end()){
                return {mp[remain], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
