/*
 * Question ID: 37
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to find the LCM of two numbers.
 *
 * Sample Test Cases:
 * Input: 4 5 -> Output: 20
 * Input: 7 3 -> Output: 21
 */
#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        long long lcm = (a * b) / gcd(a, b);
        printf("%lld\n", lcm);
    }
    return 0;
}
