/*
 * Question ID: 125
 * Section: File Handling
 * Problem Statement: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 *
 * Sample Test Cases:
 * Input: Existing File: data.txt (Content before execution: Hello world) User Input: This is appended text. -> Output: File updated successfully with appended text.
 */
#include <stdio.h>

int main(void) {
    char filename[100];
    char text[256];
    if (scanf("%99s", filename) == 1) {
        getchar(); // consume newline
        if (fgets(text, sizeof(text), stdin) != NULL) {
            FILE *fp = fopen(filename, "a");
            if (fp != NULL) {
                fputs(text, fp);
                fclose(fp);
                printf("File updated successfully with appended text.\n");
            }
        }
    }
    return 0;
}
