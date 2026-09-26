/*
 * Question ID: 82
 * Section: Strings
 * Problem Statement: Print each character of a string on a new line.
 *
 * Sample Test Cases:
 * Input: Hi -> Output: H i
 */
#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            printf("%c\n", str[i]);
        }
    }
    return 0;
}
