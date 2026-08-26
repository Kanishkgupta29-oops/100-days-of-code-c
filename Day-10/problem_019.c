/*
 * Question ID: 19
 * Section: Conditional Statements
 * Problem Statement: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 *
 * Sample Test Cases:
 * Input: 3 3 3 -> Output: Equilateral
 * Input: 3 3 4 -> Output: Isosceles
 * Input: 2 3 4 -> Output: Scalene
 */
#include <stdio.h>

int main(void) {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
    return 0;
}
