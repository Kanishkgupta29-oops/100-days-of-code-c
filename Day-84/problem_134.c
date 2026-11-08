/*
 * Question ID: 134
 * Section: Enum
 * Problem Statement: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 *
 * Sample Test Cases:
 * Input: FAILURE -> Output: Operation failed
 */
#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[20];
    if (scanf("%19s", input) == 1) {
        if (strcmp(input, "SUCCESS") == 0) {
            printf("Operation successful\n");
        } else if (strcmp(input, "FAILURE") == 0) {
            printf("Operation failed\n");
        } else if (strcmp(input, "TIMEOUT") == 0) {
            printf("Operation timed out\n");
        }
    }
    return 0;
}
