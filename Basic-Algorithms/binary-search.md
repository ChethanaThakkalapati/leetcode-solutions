## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used two pointers to represent the current search range. I checked the middle element and then discarded the half of the array that could not contain the target.

### Complexity

- **Time:** O(log n)
- **Space:** O(1)

### Notes

The input array must be sorted for binary search to work correctly. I also tested the case where the target is not present.
### Test Cases

**Test Case 1:**
- Input: `nums = [-1,0,3,5,9,12], target = 9`
- Output: `4`
- Type: Typical case

**Test Case 2:**
- Input: `nums = [-1,0,3,5,9,12], target = 2`
- Output: `-1`
- Type: Edge case