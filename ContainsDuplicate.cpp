/*
 * Problem: Contains Duplicate (LeetCode #8)
 * Language: C++
 * Description: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 */

#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int num : nums) {
            // If the number is already in the set, we found a duplicate
            if (seen.count(num)) {
                return true;
            }
            // Otherwise, add it to the set
            seen.insert(num);
        }
        
        return false;
    }
};