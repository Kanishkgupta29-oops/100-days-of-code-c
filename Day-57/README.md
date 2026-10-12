# Day 57 — Problem 107

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

## 🧪 Test Cases
### Test Case 1
- **Input**: `arr = [1, 3, 2, 4]`
- **Expected Output**: `-1, -1, 3, -1`

### Test Case 2
- **Input**: `arr = [6, 8, 0, 1, 3]`
- **Expected Output**: `-1, -1, 8, 8, 8`

### Test Case 3
- **Input**: `arr = [1, 2, 3, 5]`
- **Expected Output**: `-1, -1, -1, -1`

### Test Case 4
- **Input**: `arr = [5, 4, 3, 1]`
- **Expected Output**: `-1, 5, 4, 3`

## 💡 Notes
Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.

## 💻 Implementation
- Solution code: [problem_107.c](problem_107.c)
