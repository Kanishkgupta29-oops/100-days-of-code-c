/*
 * Question ID: 4
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to calculate the area and circumference of a circle given its radius.
 *
 * Sample Test Cases:
 * Input: 7 -> Output: Area=153.94, Circumference=43.96
 * Input: 3 -> Output: Area=28.27, Circumference=18.85
 */
#include <stdio.h>

int main(void) {
    double r;
    const double PI = 3.141592653589793;
    if (scanf("%lf", &r) == 1) {
        double area = PI * r * r;
        double circum = 2 * PI * r;
        printf("Area=%.2f, Circumference=%.2f\n", area, circum);
    }
    return 0;
}
