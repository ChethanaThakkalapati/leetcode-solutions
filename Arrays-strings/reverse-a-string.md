## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used two pointers, one starting at the beginning of the string and one at the end. I swapped the characters at these positions and moved both pointers toward the center until the string was reversed.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The solution works in-place, so no separate string is needed. I also considered the edge case of a string with only one character.
### Test Cases

**Test Case 1:**
- Input: `["h","e","l","l","o"]`
- Output: `["o","l","l","e","h"]`
- Type: Typical case

**Test Case 2:**
- Input: `["a"]`
- Output: `["a"]`
- Type: Edge case