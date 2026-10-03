/*
 * Question ID: 96
 * Section: Strings
 * Problem Statement: Reverse each word in a sentence without changing the word order.
 *
 * Sample Test Cases:
 * Input: I love coding -> Output: I evol gnidoc
 */
#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char t = *start;
        *start++ = *end;
        *end-- = t;
    }
}

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        int len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') line[len - 1] = '\0';
        char *word_start = NULL;
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ' && word_start == NULL) {
                word_start = &line[i];
            }
            if ((line[i] == ' ' || line[i + 1] == '\0') && word_start != NULL) {
                char *word_end = (line[i] == ' ') ? &line[i - 1] : &line[i];
                reverse_word(word_start, word_end);
                word_start = NULL;
            }
        }
        printf("%s\n", line);
    }
    return 0;
}
