## Problem: Valid Parentheses

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to check whether the brackets are properly matched. Opening brackets are pushed onto the stack. When a closing bracket is found, I compare it with the top bracket in the stack. If they match, the opening bracket is removed. If they do not match, the string is invalid. At the end, the stack must be empty for the string to be valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The solution was successfully accepted by LeetCode.