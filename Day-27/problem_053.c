/*
 * Question ID: 53
 * Section: Nested Loops without Arrays/Strings
 * Problem Statement: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
 *
 * Sample Test Cases:
 * Input:  -> Output: * *** ***** ******* ********* ******* ***** *** *
 */
#include <stdio.h>

int main(void) {
    int stars[] = {1, 3, 5, 7, 9, 7, 5, 3, 1};
    int total = sizeof(stars) / sizeof(stars[0]);
    for (int i = 0; i < total; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
