/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int a = n / 2;
        int result = 0;
        for (int i = 0; i <= a; i++) {
            int b = n - i * 2;
            result += Combination(i + b, b);
        }
        return result;
    }
    int Combination(int n, int k) {
        long long res = 1;
        for (int i = 1; i <= k; i++) {
            res = res * (n - i + 1) / i;
        }
        return res;
    }
};
// @lc code=end

