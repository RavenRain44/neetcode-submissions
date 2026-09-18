class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> subtracted;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (subtracted.contains(temp)) {
                return {subtracted[temp], i};
            }
            subtracted[nums[i]] = i;
        }
        return {};
    }
};
