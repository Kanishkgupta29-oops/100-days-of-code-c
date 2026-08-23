/*
 * Question ID: 14
 * Section: Conditional Statements
 * Problem Statement: Write a program to input a character and check whether it is a vowel or consonant using if–else.
 *
 * Sample Test Cases:
 * Input: a -> Output: Vowel
 * Input: b -> Output: Consonant
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        char lower = tolower((unsigned char)ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else if ((lower >= 'a' && lower <= 'z')) {
            printf("Consonant\n");
        } else {
            printf("Not an alphabet\n");
        }
    }
    return 0;
}
