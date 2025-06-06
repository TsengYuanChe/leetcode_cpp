/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for (int i = 0; i < 13; i++) {
            while(num >= values[i]) {
                num -= values[i];
                result += symbols[i];
            }
        }
        return result;
    }
};
// @lc code=end

