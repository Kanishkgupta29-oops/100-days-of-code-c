/*
 * Question ID: 118
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
 *
 * Sample Test Cases:
 * Input: nums1 = [0,3,2,4] -> Output: 1
 * Input: nums1 = [1,2,3] -> Output: 0
 * Input: nums1 = [0,4,3,1,5] -> Output: 2
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        long long total = ((long long)n * (n + 1)) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long val;
            scanf("%lld", &val);
            sum += val;
        }
        printf("%lld\n", total - sum);
    }
    return 0;
}
