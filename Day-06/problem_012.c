/*
 * Question ID: 12
 * Section: Conditional Statements
 * Problem Statement: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
 *
 * Sample Test Cases:
 * Input: -5 -> Output: Negative
 * Input: 0 -> Output: Zero
 * Input: 10 -> Output: Positive
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n > 0) {
            printf("Positive\n");
        } else {
            if (n < 0) {
                printf("Negative\n");
            } else {
                printf("Zero\n");
            }
        }
    }
    return 0;
}
