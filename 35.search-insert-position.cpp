/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if (nums.empty()) return 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == target || nums[i] > target) {
                return i;
            }
        }
        return len;
    }
};
// @lc code=end

