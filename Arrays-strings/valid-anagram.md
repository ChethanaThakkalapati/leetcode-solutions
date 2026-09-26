# Valid Anagram

## Problem Statement

Given two strings `s` and `t`, determine whether `t` is an anagram of `s`.

## Approach

1. Check whether the two strings have the same length.
2. Create a frequency array for characters.
3. Increase the count for each character in `s`.
4. Decrease the count for each character in `t`.
5. If every frequency becomes zero, the strings are anagrams.
6. Otherwise, they are not anagrams.

## Example

**Input:**

```text
s = "anagram"
t = "nagaram"
```

**Output:**

```text
true
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1), because the frequency array has a fixed size.

## Test Cases

### Test Case 1

```text
Input: s = "anagram", t = "nagaram"
Output: true
```

### Test Case 2

```text
Input: s = "rat", t = "car"
Output: false
```

## LeetCode Result

**Status:** Accepted

The solution was tested locally in VS Code before submission.
