/*
 * Question ID: 103
 * Section: Logic Enhancers
 * Problem Statement: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
 *
 * Sample Test Cases:
 * Input: nums = [1,7,3,6,5,6] -> Output: 3
 * Input: nums = [1,2,3] -> Output: -1
 * Input: nums = [2,1,-1] -> Output: 0
 * Note: Follow-up(optional): Try to solve this in O(n) TC
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            total_sum += arr[i];
        }
        long long left_sum = 0;
        int pivot = -1;
        for (int i = 0; i < n; i++) {
            if (left_sum == total_sum - left_sum - arr[i]) {
                pivot = i;
                break;
            }
            left_sum += arr[i];
        }
        printf("%d\n", pivot);
    }
    return 0;
}
