/*
 * Problem: Two Sum (LeetCode #1)
 * Language: C++
 * Description: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 */

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement exists in map
            if (map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            
            // Add current element to map
            map[nums[i]] = i;
        }
        
        return {}; // Return empty if no solution found
    }
};