/*
 * Question ID: 45
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 *
 * Sample Test Cases:
 * Input: 3 -> Output: Approximate sum: 1.56
 * Input: 5 -> Output: Approximate sum: 2.22
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        double sum = 0;
        for (int i = 1; i <= n; i++) {
            double num = 2.0 * i;
            double den = 4.0 * i - 1.0;
            sum += num / den;
        }
        printf("Approximate sum: %.2f\n", sum);
    }
    return 0;
}
