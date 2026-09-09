/*
 * Question ID: 48
 * Section: Nested Loops without Arrays/Strings
 * Problem Statement: Write a program to print the following pattern:
1
12
123
1234
12345
 *
 * Sample Test Cases:
 * Input:  -> Output: 1 12 123 1234 12345
 */
#include <stdio.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
