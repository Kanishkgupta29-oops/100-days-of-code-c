/*
 * Question ID: 28
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to print the product of even numbers from 1 to n.
 *
 * Sample Test Cases:
 * Input: 4 -> Output: 8 (2 * 4)
 * Input: 6 -> Output: 48 (2 * 4 * 6)
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        long long prod = 1;
        int count = 0;
        for (int i = 2; i <= n; i += 2) {
            prod *= i;
            count++;
        }
        if (count == 0) prod = 0;
        printf("%lld\n", prod);
    }
    return 0;
}
