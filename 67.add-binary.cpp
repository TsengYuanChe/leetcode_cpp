/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int len1 = a.length() -1;
        int len2 = b.length() -1;
        int c = 0;
        string result = "";
        while (len1 >= 0 || len2 >= 0 || c) {
            int sum = c;

            if (len1 >= 0) sum += a[len1--] - '0';
            if (len2 >= 0) sum += b[len2--] - '0';

            result = char(sum % 2 + '0') + result;
            c = sum / 2;
        }
        return result;
    }
};
// @lc code=end

