/*
 * Question ID: 29
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to calculate the factorial of a number.
 *
 * Sample Test Cases:
 * Input: 5 -> Output: 120
 * Input: 3 -> Output: 6
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
