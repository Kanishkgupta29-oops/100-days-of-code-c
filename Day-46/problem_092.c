/*
 * Question ID: 92
 * Section: Strings
 * Problem Statement: Find the first repeating lowercase alphabet in a string.
 *
 * Sample Test Cases:
 * Input: stress -> Output: s
 */
#include <stdio.h>

int main(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int seen[26] = {0};
        char first_repeat = '\0';
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int idx = str[i] - 'a';
                if (seen[idx]) {
                    first_repeat = str[i];
                    break;
                }
                seen[idx] = 1;
            }
        }
        if (first_repeat != '\0') printf("%c\n", first_repeat);
        else printf("None\n");
    }
    return 0;
}
