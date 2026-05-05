#include <string>
#include <cctype>
 
class Solution {
public:
    bool isPalindrome(std::string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            while (l < r && !isalphaN(s[l])) {
                l++;
            }
            while (r > l && !isalphaN(s[r])) {
                r--;
            }
            if (std::tolower(s[l]) != std::tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
private:
    bool isalphaN(char c) {
        return (c >= 'A' && c <= 'Z') ||
               (c >= 'a' && c <= 'z') ||
               (c >= '0' && c <= '9');
    }
};