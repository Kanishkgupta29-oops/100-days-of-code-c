/*
 * Question ID: 2
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to input two numbers and display their sum, difference, product, and quotient.
 *
 * Sample Test Cases:
 * Input: 10 2 -> Output: Sum=12, Diff=8, Product=20, Quotient=5
 * Input: 7 3 -> Output: Sum=10, Diff=4, Product=21, Quotient=2
 * Note: Division by zero should be handled carefully.
 */
#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        if (b != 0) {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined\n", a + b, a - b, a * b);
        }
    }
    return 0;
}
