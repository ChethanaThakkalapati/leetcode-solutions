# Two Sum

## Problem Statement

Given an array of integers `nums` and an integer `target`, find two different indices whose corresponding values add up to `target`.

## Approach

1. Use two loops to examine pairs of elements.
2. For each pair, calculate `nums[i] + nums[j]`.
3. If the sum equals `target`, store the two indices.
4. Return the two indices.

## Example

**Input:**

```text
nums = [2, 7, 11, 15]
target = 9
```

**Output:**

```text
[0, 1]
```

## Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(1) auxiliary space, excluding the returned array.

## Test Cases

### Test Case 1

```text
Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
```

### Test Case 2

```text
Input: nums = [3, 3], target = 6
Output: [0, 1]
```

## LeetCode Result

**Status:** Accepted

The solution was tested locally in VS Code before submission.
