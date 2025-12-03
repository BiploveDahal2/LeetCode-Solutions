/*
 * Problem: Best Time to Buy and Sell Stock (LeetCode #7)
 * Language: C++
 * Description: You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
 */

#include <vector>
#include <algorithm> // For std::max and std::min
#include <climits>   // For INT_MAX

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for (int price : prices) {
            // Update minimum price seen so far
            if (price < minPrice) {
                minPrice = price;
            } 
            // Calculate profit if we sold today
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }
        
        return maxProfit;
    }
};