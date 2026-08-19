/*
 * Question ID: 5
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to convert temperature from Celsius to Fahrenheit.
 *
 * Sample Test Cases:
 * Input: 0 -> Output: Fahrenheit=32
 * Input: 100 -> Output: Fahrenheit=212
 */
#include <stdio.h>

int main(void) {
    double c;
    if (scanf("%lf", &c) == 1) {
        double f = (c * 9.0 / 5.0) + 32.0;
        if (f == (int)f) {
            printf("Fahrenheit=%d\n", (int)f);
        } else {
            printf("Fahrenheit=%.2f\n", f);
        }
    }
    return 0;
}
