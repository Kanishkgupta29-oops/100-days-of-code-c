/*
 * Question ID: 1
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to input two numbers and display their sum.
 *
 * Sample Test Cases:
 * Input: 3 4 -> Output: Sum = 7
 * Input: -1 20 -> Output: Sum = 19
 */
#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Sum = %d\n", a + b);
    }
    return 0;
}
