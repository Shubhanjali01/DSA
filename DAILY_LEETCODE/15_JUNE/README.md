## Name of the Problem

1432. Max Difference You Can Get From Changing an Integer

##  Problem Statement
You are given an integer num. You are allowed to perform two operations independently:

Pick a digit x (0 ≤ x ≤ 9).
Pick another digit y (0 ≤ y ≤ 9), y can be equal to x.
Replace all occurrences of digit x in num with y.

Let:

a be the result of the first replacement (maximize the number).
b be the result of the second replacement (minimize the number).
Return: a - b, i.e., the maximum difference between the two new integers a and b.

Constraints
1 <= num <= 10^8

No leading zero allowed after replacement.

## Algorithm

Step 1: Convert the number to a string
Easier to manipulate digits character-by-character.

Step 2: Maximize the number (for a)
Scan from left to right.

Find the first digit that is not '9'.
Replace all occurrences of that digit with '9'.

Step 3: Minimize the number (for b)
If the first digit is not '1', replace all its occurrences with '1'.
Else, replace the first digit (from 2nd position onwards) that is neither '0' nor '1' with '0'.

Step 4: Convert the strings back to integers
Let maxNum and minNum be the two converted values.

Return maxNum - minNum.

## Time Complexity
O(n), where n is the number of digits in num.

We scan and replace characters in the string two times.


## Example Dry Run
Example 1:
Input: num = 555

Max: Replace 5 -> 9 → 999
Min: Replace 5 -> 1 → 111

Output: 999 - 111 = 888


Example 2:
Input: num = 9

Max: 9 -> 9 → 9
Min: 9 -> 1 → 1

Output: 8

