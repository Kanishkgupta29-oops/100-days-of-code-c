/*
 * Question ID: 8
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to find and display the sum of the first n natural numbers.
 *
 * Sample Test Cases:
 * Input: 5 -> Output: Sum=15
 * Input: 10 -> Output: Sum=55
 */
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long sum = (n * (n + 1)) / 2;
        printf("Sum=%lld\n", sum);
    }
    return 0;
}
