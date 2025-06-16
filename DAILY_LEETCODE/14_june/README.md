# Leetcode Problem 2566 - Maximum Difference by Remapping a Digit

## 📝 Problem Statement

You are given an integer `num`. You know that Bob will sneakily **remap** one of the 10 possible digits (`0` to `9`) to **another digit**.

Return the **difference between the maximum and minimum values** Bob can make by **remapping exactly one digit** in `num`.

---

## 🔧 Constraints and Notes

- When Bob remaps a digit `d1` to another digit `d2`, Bob replaces **all occurrences** of `d1` in `num` with `d2`.
- Bob can remap a digit to **itself**, in which case `num` does not change.
- Bob can use **different digits** to achieve the maximum and minimum numbers.
- The resulting number after remapping can contain **leading zeroes**.

---

## 💡 Algorithm

### ✅ Input: 
An integer `num`

### ✅ Output: 
Maximum difference between remapped maximum and minimum numbers

---

### Step 1: Convert Number to String
- Convert `num` to string `s` to easily manipulate its digits.

---

### Step 2: Generate Maximum Value
- **Goal**: Replace one digit with `9` to maximize the number.
- Find the **first digit that is not 9**, call it `a`.
- Replace **all occurrences of `a`** with `'9'` to get the maximum value string.

---

### Step 3: Generate Minimum Value
- **Goal**: Replace one digit with `0` or `1` to minimize the number.
- If the **first digit** is not `'1'`, replace it with `'1'`.
- Otherwise, find the **first digit that is not `'0'` or `'1'`**, call it `b`.
- Replace **all occurrences of `b`** with `'0'` to get the minimum value string.

---

### Step 4: Convert Back to Integers
- Convert both remapped strings to integers.

---

### Step 5: Return the Difference
- Return `maxNum - minNum`.

---

## 🧮 Examples

### Example 1:
```text
Input: 11891

Max Remap: Replace '1' with '9' → 99899
Min Remap: Replace '1' with '0' → 00890

Difference: 99899 - 890 = 99009
