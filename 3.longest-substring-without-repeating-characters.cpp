/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastIndex[128] = {0};
        int start = 0, maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            start = max(start, lastIndex[s[i]]);
            maxLen = max(maxLen, i - start + 1);
            lastIndex[s[i]] = i + 1;
        }
        return maxLen;
    }
};
// @lc code=end

