/*
 * Question ID: 120
 * Section: File Handling
 * Problem Statement: Write a program to take a string input. Change it to sentence case.
 *
 * Sample Test Cases:
 * Input: str = I am trying to build logic. -> Output: I Am Trying To Build Logic
 * Input: str = The classes are supposed to start early. -> Output: The Classes Are Supposed To Start Early.
 * Input: str = We are going to look at 26 different test cases. -> Output: We Are Going To Look At 26 Different Test Cases.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int new_word = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (isspace((unsigned char)str[i])) {
                new_word = 1;
            } else if (new_word && isalpha((unsigned char)str[i])) {
                str[i] = toupper((unsigned char)str[i]);
                new_word = 0;
            } else {
                new_word = 0;
            }
        }
        printf("%s", str);
    }
    return 0;
}
