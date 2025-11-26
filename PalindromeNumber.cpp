/*
 * Problem: Palindrome Number (LeetCode #9)
 * Language: C++
 * Description: Given an integer x, return true if x is a palindrome, and false otherwise.
 */

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;
        
        // Use long long to prevent overflow during reversal
        long long original = x;
        long long reversed = 0;
        
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        
        return original == reversed;
    }
};