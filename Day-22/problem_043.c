/*
 * Question ID: 43
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to check if a number is a strong number.
 *
 * Sample Test Cases:
 * Input: 145 -> Output: Strong number
 * Input: 123 -> Output: Not strong number
 */
#include <stdio.h>

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long temp = n;
        long long sum = 0;
        while (temp > 0) {
            sum += factorial(temp % 10);
            temp /= 10;
        }
        if (sum == n) {
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    }
    return 0;
}
