/*
 * Question ID: 39
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to find the product of odd digits of a number.
 *
 * Sample Test Cases:
 * Input: 12345 -> Output: 15 (1*3*5)
 * Input: 2468 -> Output: 1 (no odd digits, assume 1)
 */
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        long long prod = 1;
        int has_odd = 0;
        while (n > 0) {
            int d = n % 10;
            if (d % 2 != 0) {
                prod *= d;
                has_odd = 1;
            }
            n /= 10;
        }
        if (!has_odd) prod = 1;
        printf("%lld\n", prod);
    }
    return 0;
}
