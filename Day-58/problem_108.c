/*
 * Question ID: 108
 * Section: Logic Enhancers
 * Problem Statement: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 *
 * Sample Test Cases:
 * Input: nums = [1,2,3,4] -> Output: [24,12,8,6]
 * Input: nums = [-1,1,0,-3,3] -> Output: [0,0,9,0,0]
 * Note: Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int nums[n];
        for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
        int left[n], right[n];
        left[0] = 1;
        for (int i = 1; i < n; i++) left[i] = left[i - 1] * nums[i - 1];
        right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) right[i] = right[i + 1] * nums[i + 1];
        printf("[");
        for (int i = 0; i < n; i++) {
            printf("%d%s", left[i] * right[i], (i == n - 1 ? "" : ","));
        }
        printf("]\n");
    }
    return 0;
}
