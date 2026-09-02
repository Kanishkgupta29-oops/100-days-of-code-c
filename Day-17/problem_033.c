/*
 * Question ID: 33
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to check if a number is an Armstrong number.
 *
 * Sample Test Cases:
 * Input: 153 -> Output: Armstrong
 * Input: 123 -> Output: Not Armstrong
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long temp = n;
        int digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = n;
        long long sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            long long p = 1;
            for (int i = 0; i < digits; i++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == n) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
