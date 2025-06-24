## Algorithms

Collect key indices:
→ keyIndices = { j | nums[j] == key }

Two pointers:
→ Iterate over each index i.
→ Move pointer p forward until keyIndices[p] >= i - k.
→ If abs(i - keyIndices[p]) <= k, then i is k-distant.

Store i into result.

## Optimized Time Complexity:
Collect key indices → O(n)

Iterate over i with pointer → O(n) total (because pointer moves only forward)

👉 Overall time = O(n)
👉 Space = O(n) for storing keyIndices + result.