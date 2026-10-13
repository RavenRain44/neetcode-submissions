class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> found;
        for (int i = 0; i < nums.size(); i++) {
            if (found.contains(nums[i])) {
                return true;
            }
            found[nums[i]] = true;
        }
        return false;
    }
};