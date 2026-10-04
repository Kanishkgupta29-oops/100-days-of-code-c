/*
 * Question ID: 98
 * Section: Strings
 * Problem Statement: Print initials of a name with the surname displayed in full.
 *
 * Sample Test Cases:
 * Input: John David Doe -> Output: J.D. Doe
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char words[20][100];
        int count = 0;
        char *token = strtok(line, " \t\r\n");
        while (token != NULL && count < 20) {
            strcpy(words[count++], token);
            token = strtok(NULL, " \t\r\n");
        }
        for (int i = 0; i < count - 1; i++) {
            printf("%c.", toupper((unsigned char)words[i][0]));
        }
        if (count > 0) {
            if (count > 1) printf(" ");
            printf("%s\n", words[count - 1]);
        }
    }
    return 0;
}
