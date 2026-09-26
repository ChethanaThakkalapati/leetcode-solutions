# Merge Two Sorted Lists

## Problem

Given the heads of two sorted linked lists, merge them into one sorted linked list.

## Approach

I used two pointers to compare the current nodes of the two lists.

1. Create a dummy node to simplify the merging process.
2. Compare the values of the current nodes.
3. Attach the smaller node to the merged list.
4. Move the pointer of the selected list forward.
5. Continue until one list is empty.
6. Attach the remaining nodes from the other list.

## Example

Input:

`1 -> 2 -> 4`

`1 -> 3 -> 4`

Output:

`1 -> 1 -> 2 -> 3 -> 4 -> 4`

## Complexity

* Time: `O(n + m)`
* Space: `O(1)`

## Test Cases

### Test Case 1

Input: `1 -> 2 -> 4` and `1 -> 3 -> 4`
Output: `1 -> 1 -> 2 -> 3 -> 4 -> 4`

### Test Case 2

Input: `1 -> 3` and `2 -> 4`
Output: `1 -> 2 -> 3 -> 4`

## LeetCode Result

Accepted
