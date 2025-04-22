/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, end = 1;
        for (int i = 0; i < s.length(); i++) {
            checkCenter(s, i, i, start, end);
            checkCenter(s, i, i + 1, start, end);
        }
        return s.substr(start, end);
    }
    void checkCenter(const string& s, int left, int right, int& start, int& end) {
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            if (right - left + 1 > end) {
                start = left;
                end = right - left + 1;
            }
            left--;
            right++;
        }
    }
};
// @lc code=end

