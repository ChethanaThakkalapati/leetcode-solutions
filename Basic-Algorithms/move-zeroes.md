## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I moved every non-zero value toward the beginning of the array while keeping their original order. After all non-zero values were placed, I filled the remaining positions with zeroes.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The relative order of the non-zero elements must stay the same. I also tested an array containing multiple zeroes.
### Test Cases

**Test Case 1:**
- Input: `[0,1,0,3,12]`
- Output: `[1,3,12,0,0]`
- Type: Typical case

**Test Case 2:**
- Input: `[0,0,1]`
- Output: `[1,0,0]`
- Type: Edge case