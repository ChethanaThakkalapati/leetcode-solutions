# Move Zeroes

## Problem Statement

Given an integer array, move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.

## Approach

1. Maintain a `position` variable to track where the next non-zero element should go.
2. Traverse the array.
3. Whenever a non-zero element is found, place it at `position`.
4. Increase `position`.
5. After processing all elements, fill the remaining positions with `0`.

## Example

**Input:**

```text id="x2j9vq"
nums = [0, 1, 0, 3, 12]
```

**Output:**

```text id="yd0c7e"
[1, 3, 12, 0, 0]
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Test Cases

### Test Case 1

```text id="xgl5pg"
Input: [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]
```

### Test Case 2

```text id="z3n0cg"
Input: [0, 0, 1]
Output: [1, 0, 0]
```

## LeetCode Result

**Status:** Accepted

The solution was tested locally in VS Code before submission.
