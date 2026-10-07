/*
 * Question ID: 102
 * Section: Logic Enhancers
 * Problem Statement: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
 *
 * Sample Test Cases:
 * Input: arr = [1, 2, 8, 10, 11, 12, 19], x = 5 -> Output: 2
 * Input: arr = [1, 2, 8, 10, 11, 12, 19], x = 20 -> Output: -1
 * Input: arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0 -> Output: 0
 * Input: arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2 -> Output: 2
 * Note: Follow-up(optional): Can you do it in O(log n) Time Complexity?
 */
#include <stdio.h>

int main(void) {
    int n, x;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        if (scanf("%d", &x) == 1) {
            int ceil_idx = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] >= x) {
                    ceil_idx = i;
                    break;
                }
            }
            printf("%d\n", ceil_idx);
        }
    }
    return 0;
}
