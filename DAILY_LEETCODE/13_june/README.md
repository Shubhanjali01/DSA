## Name of the Problem
2616. Minimize the Maximum Difference of Pairs

## Problem Statement

You're given a 0-indexed integer array nums and an integer p.
Your goal is to form p pairs of indices (i, j) such that:

i < j
No index appears in more than one pair
The maximum difference among all p pairs, defined as |nums[i] - nums[j]|, is minimized

Return the minimum possible value of the maximum absolute difference among all the p pairs.

## Example
Example 1:

Input: nums = [10,1,2,7,1,3], p = 2
Output: 1
Explanation: Form pairs (1, 4) and (2, 5), both have abs difference 0 and 1 => max = 1.

Example 2:

Input: nums = [4,2,1,2], p = 1
Output: 0
Explanation: Form pair (1, 3) => abs difference = 0


## Algorithm
Strategy

Binary Search + Greedy
Binary search the minimum possible maximum difference d

For each candidate d, check if we can form p non-overlapping pairs where all pairs have a difference ≤ d.

✅ Steps
Sort nums: So that smaller differences are next to each other.
Binary Search on possible difference values (from 0 to max(nums) - min(nums)).

Greedy Check Function:

Traverse the sorted array and greedily form pairs with adjacent elements if abs(nums[i] - nums[i+1]) <= d

Skip both indices once a pair is formed to ensure non-overlapping.

## Time Complexity
Sorting: O(n log n)

Binary Search: O(log(MaxDifference))

Greedy Check: O(n) per binary search step

Total: O(n log n + n log(MaxDifference))


