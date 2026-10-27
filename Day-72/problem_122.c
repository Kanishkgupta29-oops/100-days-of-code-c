/*
 * Question ID: 122
 * Section: File Handling
 * Problem Statement: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 *
 * Sample Test Cases:
 * Input: File: info.txt (Content: Name: Rahul\nAge: 23) -> Output: Name: Rahul Age: 23
 */
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (fp != NULL) {
        char line[256];
        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }
        fclose(fp);
    }
    return 0;
}
