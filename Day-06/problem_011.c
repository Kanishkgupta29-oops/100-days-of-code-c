/*
 * Question ID: 11
 * Section: Conditional Statements
 * Problem Statement: Write a program to input an integer and check whether it is even or odd using if–else.
 *
 * Sample Test Cases:
 * Input: 7 -> Output: 7 is odd
 * Input: 12 -> Output: 12 is even
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n % 2 == 0) {
            printf("%d is even\n", n);
        } else {
            printf("%d is odd\n", n);
        }
    }
    return 0;
}
