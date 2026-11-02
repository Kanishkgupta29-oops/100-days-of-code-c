/*
 * Question ID: 128
 * Section: File Handling
 * Problem Statement: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
 *
 * Sample Test Cases:
 * Input: File: text.txt (Content: Welcome to C language) -> Output: Vowels: 8 Consonants: 10
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[100];
    if (scanf("%99s", filename) != 1) return 0;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) return 0;
    int vowels = 0, consonants = 0, ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
