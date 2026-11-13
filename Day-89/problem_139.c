/*
 * Question ID: 139
 * Section: Enum
 * Problem Statement: Show that enums store integers by printing assigned values.
 *
 * Sample Test Cases:
 * Input: No input -> Output: SUCCESS=0, FAILURE=1, TIMEOUT=2
 */
#include <stdio.h>

enum Code { SUCCESS = 0, FAILURE = 1, TIMEOUT = 2 };

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
