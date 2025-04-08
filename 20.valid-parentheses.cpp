/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int top = -1;
        int len = s.length();
        if (len == 0) return true;
        char stack[len];

        for (int i=0; i < len; i++) {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{') {
                stack[++top] = c;
            } else {
                if (top == -1) return false;
                char o = stack[top--];
                if ((c == ')' && o != '(') || (c == ']' && o != '[') || (c == '}' && o != '{')) {
                    return false;
                }
            }
        }
        return top == -1;
    }
};
// @lc code=end

