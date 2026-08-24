/*
 * Question ID: 16
 * Section: Conditional Statements
 * Problem Statement: Write a program to input three numbers and find the largest among them using if–else.
 *
 * Sample Test Cases:
 * Input: 3 7 5 -> Output: Largest is 7
 * Input: -1 -5 0 -> Output: Largest is 0
 */
#include <stdio.h>

int main(void) {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        int largest;
        if (a >= b && a >= c) {
            largest = a;
        } else if (b >= a && b >= c) {
            largest = b;
        } else {
            largest = c;
        }
        printf("Largest is %d\n", largest);
    }
    return 0;
}
