## Name of the problem
3423. Maximum Difference Between Adjacent Elements in a Circular Array

## Problem Statement
You're given a circular array nums, and your task is to find the maximum absolute difference between any pair of adjacent elements.

Note: Since it’s circular, the first and last elements are also considered adjacent.

## Examples
Example 1:

Input: nums = [1, 2, 4]
Output: 3
Explanation: max(|1-2|, |2-4|, |4-1|) = 3

Example 2:

Input: nums = [-5, -10, -5]
Output: 5
Explanation: max(|-5 - (-10)|, |-10 - (-5)|, |-5 - (-5)|) = 5


## Algorithm 
Initialize a variable maxDiff to 0.
Iterate through the array from index 0 to n-1.

For each index i, calculate the absolute difference between nums[i] and nums[(i+1)%n]:
This %n ensures the last element connects back to the first.

Update maxDiff if the current difference is larger.

##  Time Complexity
Time: O(n) — one pass through the array.

Space: O(1) — constant space usage.