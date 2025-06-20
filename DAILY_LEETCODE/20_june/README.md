## Name of the problem
3443. Maximum Manhattan Distance After K Changes

## Problem Statment

You are given a string s consisting of the characters 'N', 'S', 'E', and 'W', where s[i] indicates movements in an infinite grid:

'N' : Move north by 1 unit.
'S' : Move south by 1 unit.
'E' : Move east by 1 unit.
'W' : Move west by 1 unit.

Initially, you are at the origin (0, 0). You can change at most k characters to any of the four directions.

Find the maximum Manhattan distance from the origin that can be achieved at any time while performing the movements in order.

The Manhattan Distance between two cells (xi, yi) and (xj, yj) is |xi - xj| + |yi - yj|.
 
## Examples
Example 1:

Input: s = "NWSE", k = 1
Output: 3

Explanation:
Change s[2] from 'S' to 'N'. The string s becomes "NWNE".
Movement	Position (x, y)	Manhattan Distance	Maximum
s[0] == 'N'	(0, 1)	0 + 1 = 1	1
s[1] == 'W'	(-1, 1)	1 + 1 = 2	2
s[2] == 'N'	(-1, 2)	1 + 2 = 3	3
s[3] == 'E'	(0, 2)	0 + 2 = 2	3
The maximum Manhattan distance from the origin that can be achieved is 3. Hence, 3 is the output.

Example 2:

Input: s = "NSWWEW", k = 3
Output: 6

Explanation:
Change s[1] from 'S' to 'N', and s[4] from 'E' to 'W'. The string s becomes "NNWWWW".

The maximum Manhattan distance from the origin that can be achieved is 6. Hence, 6 is the output.

 

## Constraints:

1 <= s.length <= 105
0 <= k <= s.length
s consists of only 'N', 'S', 'E', and 'W'.


#  Algorithm (Greedy + Direction Counting)
Initialize counters for all directions: north, south, east, west.
Iterate through the string character by character.

For each character, update its corresponding direction counter.

After each step, calculate how many "canceling pairs" (like N vs S, E vs W) you can convert to same-direction moves to increase distance using at most k changes:

times1 = min(north, south, k)
times2 = min(east, west, k - times1)

Calculate the current best Manhattan distance using a helper function:
count(dir1, dir2, times) → returns abs(dir1 - dir2) + 2 * times

Track the maximum distance seen across all steps.

## Time Complexity
Time: O(n)
We iterate over the string once, and do constant-time operations per character.

Space: O(1)
Only a few integer counters and temporary variables are used.