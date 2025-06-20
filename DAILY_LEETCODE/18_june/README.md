## Name of the problem 
2966. Divide Array Into Arrays With Max Difference

##  Problem Statement
You are given an integer array nums of size n where n is a multiple of 3, and an integer k.
Divide the array nums into n / 3 arrays of size 3 such that:

The difference between any two elements in each array is less than or equal to k.
Return a 2D array containing the divided arrays.

If it is impossible to satisfy the condition, return an empty array.
If multiple answers exist, return any of them.

##  Example
Example 1:

Input: nums = [1,3,4,8,7,9,3,5,1], k = 2  
Output: [[1,1,3],[3,4,5],[7,8,9]]

Example 2:

Input: nums = [2,4,2,2,5,2], k = 2  
Output: []


##  Algorithm (Greedy with Sorting)
Sort the array nums in non-decreasing order.
Initialize an empty result vector res.
Process elements in chunks of 3:

For each chunk of 3 elements, check if max - min <= k
If yes, add this triplet to the result.
If not, return an empty vector (invalid partition).
If all chunks are valid, return the result.


## Time Complexity
Sorting: O(n log n)
Processing chunks: O(n)
Total: O(n log n)
Space Complexity: O(n) for storing result