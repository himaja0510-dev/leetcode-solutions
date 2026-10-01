## Problem: Longest Common Prefix

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of the first string with the characters at the same position in the other strings. If all strings have the same character at a position, I continue. When a different character or the end of a string is reached, the common prefix is complete.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The solution was successfully accepted by LeetCode.