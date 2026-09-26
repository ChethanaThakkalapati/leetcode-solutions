## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I tracked the lowest stock price seen so far while going through the prices. For each price, I calculated the possible profit and kept the maximum profit found.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The stock must be bought before it is sold. If no profitable transaction is possible, the answer is 0.
### Test Cases

**Test Case 1:**
- Input: `[7,1,5,3,6,4]`
- Output: `5`
- Type: Typical case

**Test Case 2:**
- Input: `[7,6,4,3,1]`
- Output: `0`
- Type: Edge case