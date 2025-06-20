## Name of the Prolem
3445. Maximum Difference Between Even and Odd Frequency II

## Problem Statement
You are given a string s consisting of digits '0' to '4' and an integer k.

Your task is to find the maximum difference between the frequency of two characters a and b in any substring of s of size at least k such that:

Character a has a non-zero even frequency.

Character b has a non-zero odd frequency.

Return the maximum difference freq(a) - freq(b) possible under the above conditions.
If no valid substring exists, return -1.

Note that subs can contain more than 2 distinct characters.
 
## Examples

Example 1:

Input: s = "11223", k = 4
Output: -1
Explanation: No substring of size ≥ 4 has one character with even frequency and one with odd frequency.


Example 2:

Input: s = "11222111", k = 3
Output: 1
Explanation: Substring "11222" has '2' with even frequency (2) and '1' with odd frequency (3). Difference = 2 - 3 = -1.
Substring "112221" has '2' (even frequency 2) and '1' (odd frequency 3). Difference = 2 - 3 = -1.
Substring "22211" has '2' (even frequency 2) and '1' (odd frequency 3). Difference = 2 - 3 = -1.
Substring "1122211" has '2' (even frequency 2) and '1' (odd frequency 4) → skip (4 is even).
Substring "11222111" has '2' (even frequency 2) and '1' (odd frequency 5). Difference = 2 - 5 = -3.

→ But substring "11222" has '2' (even 4) and '1' (odd 1). Difference = 4 - 1 = 3 → take max.


Example 3:

Input: s = "110", k = 3
Output: -1

## Constraints:
3 <= s.length <= 3 * 104

s consists only of digits '0' to '4'.

The input is generated that at least one substring has a character with an even frequency and a character with an odd frequency.

1 <= k <= s.length


## Algorithm
Initialize maxDiff as -1.
Iterate through all substrings of length at least k:

For each substring:
Count the frequency of all digits using a hashmap or array.

For all pairs (a, b):

If freq[a] is even and > 0, and freq[b] is odd and > 0:

Calculate diff = freq[a] - freq[b] and update maxDiff.

Return maxDiff.

## Time Complexity
Time Complexity: O(n^2) in worst case (looping through all substrings and scanning frequencies).

Optimizations like prefix frequency arrays or sliding window with pruning can be applied.

Space Complexity: O(1) (only constant frequency array of size 5 used, since digits are '0' to '4').


