/*
 * Question ID: 126
 * Section: File Handling
 * Problem Statement: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
 *
 * Sample Test Cases:
 * Input: Filename: sample.txt (File Exists: Yes) -> Output: File opened successfully. (Displays file content)
 * Input: Filename: nofile.txt (File Exists: No) -> Output: Error: File does not exist!
 */
#include <stdio.h>

int main(void) {
    char filename[100];
    if (scanf("%99s", filename) == 1) {
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error: File does not exist!\n");
        } else {
            printf("File opened successfully.\n");
            char line[256];
            while (fgets(line, sizeof(line), fp) != NULL) {
                printf("%s", line);
            }
            fclose(fp);
        }
    }
    return 0;
}
