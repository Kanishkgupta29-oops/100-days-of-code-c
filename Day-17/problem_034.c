/*
 * Question ID: 34
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to check if a number is prime.
 *
 * Sample Test Cases:
 * Input: 7 -> Output: Prime
 * Input: 10 -> Output: Not prime
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n <= 1) {
            printf("Not prime\n");
            return 0;
        }
        int is_prime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
    return 0;
}
