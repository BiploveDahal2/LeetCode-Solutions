/*
 * Problem: Reverse String (LeetCode #344)
 * Language: C++
 * Description: Write a function that reverses a string. The input string is given as an array of characters s.
 */

#include <vector>
#include <algorithm> // For std::swap

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            std::swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};