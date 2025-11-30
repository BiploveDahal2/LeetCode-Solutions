/*
 * Problem: Maximum Subarray (LeetCode #6)
 * Language: C++
 * Description: Find the subarray with the largest sum and return its sum.
 */

#include <vector>
#include <algorithm> // For std::max

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];
        
        for (size_t i = 1; i < nums.size(); i++) {
            // Either extend the previous subarray or start a new one
            currentSum = std::max(nums[i], currentSum + nums[i]);
            maxSum = std::max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};