/*
 * Question ID: 91
 * Section: Strings
 * Problem Statement: Remove all vowels from a string.
 *
 * Sample Test Cases:
 * Input: education -> Output: dctn
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            char lower = tolower((unsigned char)str[i]);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                putchar(str[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}
