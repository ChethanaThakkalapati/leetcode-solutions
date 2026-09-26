# Valid Parentheses

## Problem

Given a string containing parentheses, brackets, and braces, determine whether the brackets are valid and correctly matched.

## Approach

I used a stack.

1. When an opening bracket `(`, `[`, or `{` appears, push it onto the stack.
2. When a closing bracket appears, check the top of the stack.
3. If the closing bracket matches the opening bracket, remove the opening bracket.
4. If it does not match, return `false`.
5. At the end, the stack must be empty for the string to be valid.

## Example

Input:
`"()[]{}"`

Output:
`true`

Input:
`"(]"`

Output:
`false`

## Complexity

* Time: `O(n)`
* Space: `O(n)`

## Test Cases

### Test Case 1

Input: `"()[]{}"`
Output: `true`

### Test Case 2

Input: `"(]"`
Output: `false`

## LeetCode Result

Accepted
