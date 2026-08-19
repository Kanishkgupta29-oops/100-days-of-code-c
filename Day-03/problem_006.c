/*
 * Question ID: 6
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to swap two numbers using a third variable.
 *
 * Sample Test Cases:
 * Input: 3 5 -> Output: After swap: 5 3
 * Input: -1 1 -> Output: After swap: 1 -1
 */
#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int temp = a;
        a = b;
        b = temp;
        printf("After swap: %d %d\n", a, b);
    }
    return 0;
}
