## Problem: Valid Anagram

**LeetCode:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency counting approach. I created an array of 26 integers to store the frequency of each lowercase letter. I increased the count for every character in the first string and decreased the count for every character in the second string. If all counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The solution was successfully accepted by LeetCode.