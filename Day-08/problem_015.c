/*
 * Question ID: 15
 * Section: Conditional Statements
 * Problem Statement: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 *
 * Sample Test Cases:
 * Input: A -> Output: Uppercase alphabet
 * Input: a -> Output: Lowercase alphabet
 * Input: 3 -> Output: Digit
 * Input: # -> Output: Special character
 */
#include <stdio.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase alphabet\n");
        } else if (ch >= 'a' && ch <= 'z') {
            printf("Lowercase alphabet\n");
        } else if (ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("Special character\n");
        }
    }
    return 0;
}
