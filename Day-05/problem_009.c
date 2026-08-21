/*
 * Question ID: 9
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to calculate simple and compound interest for given principal, rate, and time.
 *
 * Sample Test Cases:
 * Input: 1000 5 2 -> Output: Simple Interest=100, Compound Interest=102.5
 * Input: 5000 7 3 -> Output: Simple Interest=1050, Compound Interest=1125.76
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double p, r, t;
    if (scanf("%lf %lf %lf", &p, &r, &t) == 3) {
        double si = (p * r * t) / 100.0;
        double ci = p * (pow(1 + (r / 100.0), t) - 1.0);
        printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);
    }
    return 0;
}
