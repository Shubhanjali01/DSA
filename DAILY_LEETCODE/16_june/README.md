### Problem Name
1432. Max Difference You Can Get From Changing an Integer

### Problem Statement 
You are given an integer array nums.
Find the maximum difference nums[j] - nums[i] such that i < j and nums[i] < nums[j].

If no such pair exists, return -1.

### Algorithm 

We want to find max(nums[j] - nums[i]) such that i < j and nums[i] < nums[j].

Steps:
Initialize min_val = nums[0] (track the smallest element seen so far).

Initialize max_diff = -1.

Loop through the array from index 1 to n-1:

If nums[i] > min_val, compute diff = nums[i] - min_val, and update max_diff.

Otherwise, update min_val = nums[i].

Return max_diff.

### Time Complexity 
O(n): Single pass through the array.