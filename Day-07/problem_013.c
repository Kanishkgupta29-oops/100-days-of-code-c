/*
 * Question ID: 13
 * Section: Conditional Statements
 * Problem Statement: Write a program to input a year and check whether it is a leap year or not using conditional statements.
 *
 * Sample Test Cases:
 * Input: 2020 -> Output: Leap year
 * Input: 1900 -> Output: Not a leap year
 * Input: 2000 -> Output: Leap year
 * Note: Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
 */
#include <stdio.h>

int main(void) {
    int year;
    if (scanf("%d", &year) == 1) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }
    return 0;
}
