/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) return s;

        int count = 0;
        string result = "";
        while (count < numRows) {
            if (count == 0 || count == numRows - 1) {
                for (int i = count; i < s.length(); i += countSpace(numRows - 2)) {
                    result = result + s[i];
                }
            } else {
                for (int i = count; i < s.length(); i += countSpace(numRows - 2)) {
                    result = result + s[i];
                    if (i + countSpace(numRows - 2 - count) < s.length()) {
                        result = result + s[i + countSpace(numRows - 2 - count)];
                    }
                }
            }
            count++;
        }
        return result;
    }
    int countSpace(int n) {
        return 2*n + 2;
    }
};
// @lc code=end

