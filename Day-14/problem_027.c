/*
 * Question ID: 27
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to print the sum of the first n odd numbers.
 *
 * Sample Test Cases:
 * Input: 3 -> Output: 9
 * Input: 5 -> Output: 25
 */
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long sum = 0;
        for (long long i = 1; i <= n; i++) {
            sum += (2 * i - 1);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
