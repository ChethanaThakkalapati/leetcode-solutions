# Reverse Linked List

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

I used three pointers:

* `prev` stores the previous node.
* `current` stores the current node.
* `next` temporarily stores the next node.

For each node, I change its `next` pointer to point to the previous node. Then I move the pointers forward until the entire list is reversed.

## Example

Input:

`1 -> 2 -> 3 -> 4 -> 5`

Output:

`5 -> 4 -> 3 -> 2 -> 1`

## Complexity

* Time: `O(n)`
* Space: `O(1)`

## Test Cases

### Test Case 1

Input: `1 -> 2 -> 3 -> 4 -> 5`
Output: `5 -> 4 -> 3 -> 2 -> 1`

### Test Case 2

Input: `1 -> 2`
Output: `2 -> 1`

## LeetCode Result

Accepted
