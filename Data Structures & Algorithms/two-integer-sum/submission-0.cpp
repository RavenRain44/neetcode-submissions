class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> subtracted;
        for (int i = 0; i < nums.size(); i++) {
            if (subtracted.count(nums[i])) {
                return {subtracted[nums[i]], i};
            }
            subtracted[target - nums[i]] = i;
        }
        return {};
    }
};
