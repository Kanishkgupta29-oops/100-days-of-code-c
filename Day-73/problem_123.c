/*
 * Question ID: 123
 * Section: File Handling
 * Problem Statement: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
 *
 * Sample Test Cases:
 * Input: File: sample.txt (Content: Hello world\nThis is C programming) -> Output: Characters: 31 Words: 5 Lines: 2
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[100];
    if (scanf("%99s", filename) != 1) return 0;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) return 0;
    int ch;
    long long chars = 0, words = 0, lines = 0;
    int in_word = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(fp);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", chars, words, lines);
    return 0;
}
