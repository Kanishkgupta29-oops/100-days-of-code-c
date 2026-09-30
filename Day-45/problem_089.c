/*
 * Question ID: 89
 * Section: Strings
 * Problem Statement: Count frequency of a given character in a string.
 *
 * Sample Test Cases:
 * Input: programming g -> Output: 2
 */
#include <stdio.h>

int main(void) {
    char str[1000];
    char ch;
    if (scanf("%999s", str) == 1 && scanf(" %c", &ch) == 1) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ch) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
