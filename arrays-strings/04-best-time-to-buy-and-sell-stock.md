## Problem: Best Time to Buy and Sell Stock

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach. I kept track of the minimum price seen so far and calculated the profit for each later price. Whenever a higher profit was found, I updated the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The solution was successfully accepted by LeetCode.