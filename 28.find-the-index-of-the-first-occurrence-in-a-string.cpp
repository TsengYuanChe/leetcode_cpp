/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = haystack.length();
        int len2 = needle.length();
        if (len2 == 0) return 0;
        for (int i = 0; i < len; i++) {
            if (haystack[i] == needle[0]) {
                for (int j = 0; j < len2; j++) {
                    if (haystack[i+j] != needle[j]) {
                        break;
                    } else if (j == len2 -1 ) {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};
// @lc code=end

