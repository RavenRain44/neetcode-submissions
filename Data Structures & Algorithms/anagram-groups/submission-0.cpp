class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> anagrams;
        for (int i = 0; i < strs.size(); i++) {
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            anagrams[sorted].push_back(strs[i]);
        }
        vector<vector<string>> values;
        for (const auto& [key, value] : anagrams) {
            values.push_back(value);
        }
        return values;
    }
};
