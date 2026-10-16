# Day 61 — Problem 111

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

## 🧪 Test Cases
### Test Case 1
- **Input**: `arr[] = [-8, 2, 3, -6, 10], k = 2`
- **Expected Output**: `-8 0 -6 -6`
- **Explanation**: Window [-8, 2] First negative integer is -8. Window No negative integers, output is 0. Window [3, -6] First negative integer is -6. Window [-6, 10] First negative integer is -6.

### Test Case 2
- **Input**: `arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3`
- **Expected Output**: `-1 -1 -7 -15 -15 0`
- **Explanation**: Window [12, -1, -7] First negative integer is -1. Window [-1, -7, 8] First negative integer is -1. Window [-7, 8, -15] First negative integer is -7. Window [8, -15, 30] First negative integer is -15. Window [-15, 30, 16] First negative integer is -15. Window No negative integers, output is 0.

### Test Case 3
- **Input**: `arr[] = [12, 1, 3, 5], k = 3`
- **Expected Output**: `0 0`
- **Explanation**: Window No negative integers, output is 0. Window No negative integers, output is 0.

## 💻 Implementation
- Solution code: [problem_111.c](problem_111.c)
