class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res(2);
        for(int i=0; i<nums.size(); i++){
            if(mp.contains(target-nums[i])){
                res[0] = mp[target-nums[i]];
                res[1] = i;
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};