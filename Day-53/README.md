# Day 53 — Problem 103

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

## 🧪 Test Cases
### Test Case 1
- **Input**: `nums = [1,7,3,6,5,6]`
- **Expected Output**: `3`
- **Explanation**: The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.

### Test Case 2
- **Input**: `nums = [1,2,3]`
- **Expected Output**: `-1`
- **Explanation**: There is no index that satisfies the conditions in the problem statement.

### Test Case 3
- **Input**: `nums = [2,1,-1]`
- **Expected Output**: `0`
- **Explanation**: The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.

## 💡 Notes
Follow-up(optional): Try to solve this in O(n) TC

## 💻 Implementation
- Solution code: [problem_103.c](problem_103.c)
