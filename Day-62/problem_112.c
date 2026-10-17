/*
 * Question ID: 112
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 *
 * Sample Test Cases:
 * Input: arr[] = [2, 3, -8, 7, -1, 2, 3] -> Output: 11
 * Input: arr[] = [-2, -4] -> Output: -2
 * Input: arr[] = [5, 4, 1, 7, 8] -> Output: 25
 */
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        long long max_so_far = LLONG_MIN;
        long long current_max = 0;
        for (int i = 0; i < n; i++) {
            long long val;
            scanf("%lld", &val);
            current_max += val;
            if (current_max > max_so_far) max_so_far = current_max;
            if (current_max < 0) current_max = 0;
        }
        printf("%lld\n", max_so_far);
    }
    return 0;
}
