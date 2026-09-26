/*
 * Question ID: 81
 * Section: Strings
 * Problem Statement: Count characters in a string without using built-in length functions.
 *
 * Sample Test Cases:
 * Input: Hello -> Output: 5
 * Input:   -> Output: 1
 */
#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n') {
            len++;
        }
        printf("%d\n", len);
    }
    return 0;
}
