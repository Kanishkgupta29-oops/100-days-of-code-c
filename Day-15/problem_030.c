/*
 * Question ID: 30
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to reverse a given number.
 *
 * Sample Test Cases:
 * Input: 1234 -> Output: 4321
 * Input: 100 -> Output: 1
 */
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long rev = 0;
        int is_neg = 0;
        if (n < 0) {
            is_neg = 1;
            n = -n;
        }
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        if (is_neg) rev = -rev;
        printf("%lld\n", rev);
    }
    return 0;
}
