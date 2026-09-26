## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I counted how many times each character appears in both strings. If the strings have the same length and every character has the same count, they are anagrams.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

I first checked whether the two strings have the same length. If their lengths are different, they cannot be anagrams.
### Test Cases

**Test Case 1:**
- Input: `s = "anagram", t = "nagaram"`
- Output: `true`
- Type: Typical case

**Test Case 2:**
- Input: `s = "rat", t = "car"`
- Output: `false`
- Type: Edge case