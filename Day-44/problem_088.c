/*
 * Question ID: 88
 * Section: Strings
 * Problem Statement: Replace spaces with hyphens in a string.
 *
 * Sample Test Cases:
 * Input: hello world -> Output: hello-world
 */
#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') str[i] = '-';
        }
        printf("%s", str);
    }
    return 0;
}
