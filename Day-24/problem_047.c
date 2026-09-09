/*
 * Question ID: 47
 * Section: Nested Loops without Arrays/Strings
 * Problem Statement: Write a program to print the following pattern:
*
**
***
****
*****
 *
 * Sample Test Cases:
 * Input:  -> Output: * ** *** **** *****
 */
#include <stdio.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
