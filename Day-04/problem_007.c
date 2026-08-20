/*
 * Question ID: 7
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to swap two numbers without using a third variable.
 *
 * Sample Test Cases:
 * Input: 10 20 -> Output: After swap: 20 10
 * Input: 7 14 -> Output: After swap: 14 7
 */
#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swap: %d %d\n", a, b);
    }
    return 0;
}
