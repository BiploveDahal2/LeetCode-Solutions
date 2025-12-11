/*
 * Problem: Valid Anagram (LeetCode #10)
 * Language: C++
 * Description: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 */

#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;

        // Frequency array for 26 lowercase English letters
        std::vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // Check if all counts are zero
        for (int c : count) {
            if (c != 0) return false;
        }

        return true;
    }
};