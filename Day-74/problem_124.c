/*
 * Question ID: 124
 * Section: File Handling
 * Problem Statement: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 *
 * Sample Test Cases:
 * Input: Source File: source.txt (Content: Learning C File Handling) -> Output: File copied successfully to destination.txt
 */
#include <stdio.h>

int main(void) {
    char src[100], dest[100];
    if (scanf("%99s %99s", src, dest) == 2) {
        FILE *f_src = fopen(src, "r");
        if (f_src == NULL) return 0;
        FILE *f_dest = fopen(dest, "w");
        if (f_dest == NULL) {
            fclose(f_src);
            return 0;
        }
        int ch;
        while ((ch = fgetc(f_src)) != EOF) {
            fputc(ch, f_dest);
        }
        fclose(f_src);
        fclose(f_dest);
        printf("File copied successfully to %s\n", dest);
    }
    return 0;
}
