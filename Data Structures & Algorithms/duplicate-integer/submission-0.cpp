class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> map;
        for (int i : nums) {
            if (map[i]) {
                return true;
            }
            map[i] = true;
        }
        return false;
    }
};