/*
 * Question ID: 87
 * Section: Strings
 * Problem Statement: Count spaces, digits, and special characters in a string.
 *
 * Sample Test Cases:
 * Input: a b1&2 -> Output: Spaces=1, Digits=2, Special=1
 */
#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int spaces = 0, digits = 0, special = 0;
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            if (str[i] == ' ') spaces++;
            else if (str[i] >= '0' && str[i] <= '9') digits++;
            else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                // alphabet
            } else {
                special++;
            }
        }
        printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    }
    return 0;
}
