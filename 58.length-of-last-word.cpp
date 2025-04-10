/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int count = 0;
        int c = len - 1;
        while (c >= 0 && s[c] == ' ') {
            c--;
        }
        while (c >= 0 && s[c] != ' ') {
            count++;
            c--;
        }
        return count;
    }
};
// @lc code=end

