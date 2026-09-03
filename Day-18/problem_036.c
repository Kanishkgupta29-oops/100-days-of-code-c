/*
 * Question ID: 36
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to find the HCF (GCD) of two numbers.
 *
 * Sample Test Cases:
 * Input: 12 18 -> Output: 6
 * Input: 7 9 -> Output: 1
 */
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
