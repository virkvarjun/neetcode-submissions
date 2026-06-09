class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> count;
        for (int i = 0; i < s.size(); i++) {
            count[s[i]]++;   // s adds to the tally
            count[t[i]]--;   // t cancels it out
        }
        for (auto& pair : count) {
            if (pair.second != 0) {
                return false;
            }
        }
        return true;
    }
};
