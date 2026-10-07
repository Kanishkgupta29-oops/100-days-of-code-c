# Day 52 — Problem 102

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

## 🧪 Test Cases
### Test Case 1
- **Input**: `arr = [1, 2, 8, 10, 11, 12, 19], x = 5`
- **Expected Output**: `2`
- **Explanation**: Smallest number greater than 5 is 8, whose index is 2.

### Test Case 2
- **Input**: `arr = [1, 2, 8, 10, 11, 12, 19], x = 20`
- **Expected Output**: `-1`
- **Explanation**: No element greater than 20 is found. So output is -1.

### Test Case 3
- **Input**: `arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0`
- **Expected Output**: `0`
- **Explanation**: Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.

### Test Case 4
- **Input**: `arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2`
- **Expected Output**: `2`
- **Explanation**: If x is directly present, return the index of its first occurrence. 

## 💡 Notes
Follow-up(optional): Can you do it in O(log n) Time Complexity?

## 💻 Implementation
- Solution code: [problem_102.c](problem_102.c)
