/*
 * Question ID: 105
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 *
 * Sample Test Cases:
 * Input: nums = [3,2,3] -> Output: 3
 * Input: nums = [2,2,1,1,1,2,2] -> Output: 2
 * Input: nums = [2,2,1,1,1,2,2,3] -> Output: -1
 * Note: Follow-up (optional): Can you do it in O(n) Time Complexity?
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int candidate = arr[0], count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == candidate) {
                count++;
            } else {
                count--;
                if (count == 0) {
                    candidate = arr[i];
                    count = 1;
                }
            }
        }
        int actual_count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == candidate) actual_count++;
        }
        if (actual_count > n / 2) printf("%d\n", candidate);
        else printf("-1\n");
    }
    return 0;
}
