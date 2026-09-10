/*
 * Question ID: 50
 * Section: Nested Loops without Arrays/Strings
 * Problem Statement: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
 *
 * Sample Test Cases:
 * Input:  -> Output: *****  ****   ***    **     *
 * Input:  -> Output: Note: Spaces indicate indentation.
 */
#include <stdio.h>

int main(void) {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
