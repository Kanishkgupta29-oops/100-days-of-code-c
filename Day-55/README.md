# Day 55 — Problem 105

**Section**: Logic Enhancers

## 📝 Problem Statement
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

## 🧪 Test Cases
### Test Case 1
- **Input**: `nums = [3,2,3]`
- **Expected Output**: `3`
- **Explanation**: Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.

### Test Case 2
- **Input**: `nums = [2,2,1,1,1,2,2]`
- **Expected Output**: `2`
- **Explanation**: Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.

### Test Case 3
- **Input**: `nums = [2,2,1,1,1,2,2,3]`
- **Expected Output**: `-1`
- **Explanation**: Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. Hence, no majority element exists.

## 💡 Notes
Follow-up (optional): Can you do it in O(n) Time Complexity?

## 💻 Implementation
- Solution code: [problem_105.c](problem_105.c)
