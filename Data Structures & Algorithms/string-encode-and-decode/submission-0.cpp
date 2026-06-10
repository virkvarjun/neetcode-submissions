class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded;
        for (const string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        int n = s.size();
        while (i < n) {
            int j = i;
            while (s[j] != '#') {     // find the '#' that ends the length
                j++;
            }
            int length = stoi(s.substr(i, j - i));   // the number before '#'
            i = j + 1;                                // step past the '#'
            res.push_back(s.substr(i, length));       // grab exactly `length` chars
            i += length;                              // step past the content
        }
        return res;
    }
};