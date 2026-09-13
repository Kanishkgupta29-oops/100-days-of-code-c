/*
 * Question ID: 55
 * Section: Nested Loops without Arrays/Strings
 * Problem Statement: Write a program to print all the prime numbers from 1 to n.
 *
 * Sample Test Cases:
 * Input: 10 -> Output: 2 3 5 7
 * Input: 20 -> Output: 2 3 5 7 11 13 17 19
 */
#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                if (!first) printf(" ");
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
