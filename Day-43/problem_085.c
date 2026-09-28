/*
 * Question ID: 85
 * Section: Strings
 * Problem Statement: Reverse a string.
 *
 * Sample Test Cases:
 * Input: abcd -> Output: dcba
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int len = strlen(str);
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            char t = str[i];
            str[i] = str[j];
            str[j] = t;
        }
        printf("%s\n", str);
    }
    return 0;
}
