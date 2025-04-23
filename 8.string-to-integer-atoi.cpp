/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        while(i < n && s[i] == ' ') i++;

        if (i == n) return 0;
        int sign = 1;
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        long long result = 0;
        while(i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (sign * result <= INT_MIN) return INT_MIN;
            if (sign * result >= INT_MAX) return INT_MAX;
            i++;
        }
        return sign * result;
    }
};
// @lc code=end

