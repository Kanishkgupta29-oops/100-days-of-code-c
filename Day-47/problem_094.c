/*
 * Question ID: 94
 * Section: Strings
 * Problem Statement: Find the longest word in a sentence.
 *
 * Sample Test Cases:
 * Input: I love programming -> Output: programming
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char longest[1000] = "";
        int max_len = 0;
        char *token = strtok(line, " \t\r\n");
        while (token != NULL) {
            int len = strlen(token);
            if (len > max_len) {
                max_len = len;
                strcpy(longest, token);
            }
            token = strtok(NULL, " \t\r\n");
        }
        printf("%s\n", longest);
    }
    return 0;
}
