/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int len = s.length();

        for (int i = 0; i < len; i++) {
            int cur = chartoint(s[i]);
            int next = (i + 1 < len) ? chartoint(s[i+1]) : 0;
            if (cur < next) {
                result -= cur;
            } else {
                result += cur;
            }
        }
        return result;
    }
    int chartoint(char x) {
        switch (x)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
};
// @lc code=end

