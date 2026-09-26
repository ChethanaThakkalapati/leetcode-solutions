# Valid Palindrome

## Problem Statement

Given a string, determine whether it is a palindrome after converting uppercase letters to lowercase and ignoring non-alphanumeric characters.

## Approach

1. Use two pointers: one starting from the left and one from the right.
2. Skip characters that are not alphanumeric.
3. Convert characters to lowercase before comparing them.
4. If the characters are different, return `false`.
5. Move both pointers toward the center.
6. If all valid characters match, return `true`.

## Example

**Input:**

```text
"A man, a plan, a canal: Panama"
```

**Output:**

```text
true
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Test Cases

### Test Case 1

```text
Input: "A man, a plan, a canal: Panama"
Output: true
```

### Test Case 2

```text
Input: "race a car"
Output: false
```

## LeetCode Result

**Status:** Accepted

The solution was tested locally in VS Code before submission.
