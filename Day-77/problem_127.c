/*
 * Question ID: 127
 * Section: File Handling
 * Problem Statement: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
 *
 * Sample Test Cases:
 * Input: Input File (input.txt): Hello World\nC programming -> Output: Output File (output.txt): HELLO WORLD\nC PROGRAMMING
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) return 0;
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        return 0;
    }
    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }
    fclose(in);
    fclose(out);
    return 0;
}
