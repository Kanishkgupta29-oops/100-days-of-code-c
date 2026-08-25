/*
 * Question ID: 18
 * Section: Conditional Statements
 * Problem Statement: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
 *
 * Sample Test Cases:
 * Input: 95 -> Output: Grade A
 * Input: 82 -> Output: Grade B
 * Input: 68 -> Output: Grade D
 * Input: 50 -> Output: Grade F
 */
#include <stdio.h>

int main(void) {
    double marks;
    if (scanf("%lf", &marks) == 1) {
        if (marks >= 90.0 && marks <= 100.0) {
            printf("Grade A\n");
        } else if (marks >= 80.0 && marks < 90.0) {
            printf("Grade B\n");
        } else if (marks >= 70.0 && marks < 80.0) {
            printf("Grade C\n");
        } else if (marks >= 60.0 && marks < 70.0) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }
    return 0;
}
