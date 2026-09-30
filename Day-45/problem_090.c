/*
 * Question ID: 90
 * Section: Strings
 * Problem Statement: Toggle case of each character in a string.
 *
 * Sample Test Cases:
 * Input: Hello -> Output: hELLO
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (isupper((unsigned char)str[i])) {
                str[i] = tolower((unsigned char)str[i]);
            } else if (islower((unsigned char)str[i])) {
                str[i] = toupper((unsigned char)str[i]);
            }
        }
        printf("%s", str);
    }
    return 0;
}
