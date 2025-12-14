/*
 * Problem: Group Anagrams
 * Difficulty: Medium
 * Topic: Hash Map, Strings
 * * Description:
 * Given an array of strings strs, group the anagrams together. You can return the answer in any order.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
 * typically using all the original letters exactly once.
 * * Example:
 * Input: strs = ["eat","tea","tan","ate","nat","bat"]
 * Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 */

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> map;

        for (const auto& s : strs) {
            std::string key = s;
            std::sort(key.begin(), key.end()); // Sorting creates a unique key for anagrams (e.g., "ate" -> "aet")
            map[key].push_back(s);
        }

        std::vector<std::vector<std::string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};