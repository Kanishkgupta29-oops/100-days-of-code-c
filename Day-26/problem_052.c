/*
 * Question ID: 52
 * Section: Nested Loops without Arrays/Strings
 * Problem Statement: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
 *
 * Sample Test Cases:
 * Input:  -> Output: Pattern with stars spaced irregularly as shown.
 */
#include <stdio.h>

int main(void) {
    int pattern[] = {1, 3, 5, 3, 1};
    int len = sizeof(pattern) / sizeof(pattern[0]);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
