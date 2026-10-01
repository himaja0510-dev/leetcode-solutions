## Problem: Binary Search

**LeetCode:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search approach. I maintained two pointers, `left` and `right`, to represent the current search range. I calculated the middle position and compared the middle element with the target. If the target was larger, I searched the right half; if it was smaller, I searched the left half. If the target was found, I returned its index. Otherwise, I returned -1.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The solution was successfully accepted by LeetCode.