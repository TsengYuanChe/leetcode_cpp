/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;

        backtrack(digits, 0, "", result);
        return result;
    }
    void backtrack(const string& digits, int index, string current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = intToString(digits[index]);
        for (char c : letters) {
            backtrack(digits, index + 1, current + c, result);
        }
    }

    string intToString(char x) {
        switch(x)
        {
            case '2':
                return "abc";
            case '3':
                return "def";
            case '4':
                return "ghi";
            case '5':
                return "jkl";
            case '6':
                return "mno";
            case '7':
                return "pqrs";
            case '8':
                return "tuv";
            case '9':
                return "wxyz";
            default:
                return "";
        }
    }
};
// @lc code=end

