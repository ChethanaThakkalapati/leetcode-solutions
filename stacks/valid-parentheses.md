## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket appeared, I checked whether it matched the most recently stored opening bracket.

### Complexity

- **Time:** O(n)
- **Space:** O(n)

### Notes

The solution must handle cases where a closing bracket appears without a matching opening bracket. The stack must also be empty at the end for the string to be valid.
### Test Cases

**Test Case 1:**
- Input: `"()[]{}"`
- Output: `true`
- Type: Typical case

**Test Case 2:**
- Input: `"(]"`
- Output: `false`
- Type: Edge case