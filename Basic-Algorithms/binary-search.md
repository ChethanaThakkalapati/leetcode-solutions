# Binary Search

## Problem

Given a sorted array of integers, find the position of a target value. Return `-1` if the target is not present.

## Approach

I used binary search.

1. Set `left` to the first index.
2. Set `right` to the last index.
3. Find the middle index.
4. If the middle value equals the target, return its index.
5. If the middle value is smaller than the target, search the right half.
6. Otherwise, search the left half.
7. Return `-1` if the target is not found.

## Example

Input:
`nums = [-1,0,3,5,9,12], target = 9`

Output:
`4`

## Complexity

* Time: `O(log n)`
* Space: `O(1)`

## Test Cases

### Test Case 1

Input: `[-1,0,3,5,9,12]`, target = `9`
Output: `4`

### Test Case 2

Input: `[-1,0,3,5,9,12]`, target = `2`
Output: `-1`

## LeetCode Result

Accepted
