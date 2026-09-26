## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of the strings from left to right. I continued while all strings had the same character at the current position, stopping when a difference was found.

### Complexity

- **Time:** O(n × m)
- **Space:** O(1)

### Notes

An important edge case is when the strings have no common prefix. In that case, the result is an empty string.
### Test Cases

**Test Case 1:**
- Input: `["flower","flow","flight"]`
- Output: `"fl"`
- Type: Typical case

**Test Case 2:**
- Input: `["dog","racecar","car"]`
- Output: `""`
- Type: Edge case