/*
 * Question ID: 104
 * Section: Logic Enhancers
 * Problem Statement: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 *
 * Sample Test Cases:
 * Input: n = 8 -> Output: 6
 * Input: n = 1 -> Output: 1
 * Input: n = 4 -> Output: -1
 * Note: Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long total = (n * (n + 1)) / 2;
        long long x = (long long)sqrt((double)total);
        if (x * x == total) {
            printf("%lld\n", x);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
