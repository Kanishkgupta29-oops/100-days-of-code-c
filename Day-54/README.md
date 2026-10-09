# Day 54 — Problem 104

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

## 🧪 Test Cases
### Test Case 1
- **Input**: `n = 8`
- **Expected Output**: `6`
- **Explanation**: 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.

### Test Case 2
- **Input**: `n = 1`
- **Expected Output**: `1`
- **Explanation**: 1 is the pivot integer since: 1 = 1.

### Test Case 3
- **Input**: `n = 4`
- **Expected Output**: `-1`
- **Explanation**: It can be proved that no such integer exists.

## 💡 Notes
Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?

## 💻 Implementation
- Solution code: [problem_104.c](problem_104.c)
