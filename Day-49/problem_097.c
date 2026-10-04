/*
 * Question ID: 97
 * Section: Strings
 * Problem Statement: Print the initials of a name.
 *
 * Sample Test Cases:
 * Input: John Doe -> Output: J.D.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *token = strtok(line, " \t\r\n");
        while (token != NULL) {
            printf("%c.", toupper((unsigned char)token[0]));
            token = strtok(NULL, " \t\r\n");
        }
        printf("\n");
    }
    return 0;
}
