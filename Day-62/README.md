# Day 62 — Problem 112

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

## 🧪 Test Cases
### Test Case 1
- **Input**: `arr[] = [2, 3, -8, 7, -1, 2, 3]`
- **Expected Output**: `11`
- **Explanation**: The subarray [7, -1, 2, 3] has the largest sum 11.

### Test Case 2
- **Input**: `arr[] = [-2, -4]`
- **Expected Output**: `-2`
- **Explanation**: The subarray [-2] has the largest sum -2.

### Test Case 3
- **Input**: `arr[] = [5, 4, 1, 7, 8]`
- **Expected Output**: `25`
- **Explanation**: The subarray has the largest sum 25.

## 💻 Implementation
- Solution code: [problem_112.c](problem_112.c)
