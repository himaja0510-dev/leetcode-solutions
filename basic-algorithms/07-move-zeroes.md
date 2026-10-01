## Problem: Move Zeroes

**LeetCode:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position pointer to keep track of where the next non-zero element should be placed. I scanned the array and moved every non-zero element toward the beginning while maintaining its original order. After all non-zero elements were placed, I filled the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The solution was successfully accepted by LeetCode.