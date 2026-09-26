## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a simple approach that checks pairs of numbers and finds the two indices whose values add up to the target. The solution returns the indices of the matching pair.

### Complexity

- **Time:** O(n²)
- **Space:** O(1)

### Notes

I tested a normal case and an edge case where the two numbers are the same.
### Test Cases

**Test Case 1:**
- Input: `nums = [2,7,11,15], target = 9`
- Output: `[0,1]`
- Type: Typical case

**Test Case 2:**
- Input: `nums = [3,2,4], target = 6`
- Output: `[1,2]`
- Type: Edge case