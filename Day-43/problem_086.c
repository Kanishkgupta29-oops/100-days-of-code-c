/*
 * Question ID: 86
 * Section: Strings
 * Problem Statement: Check if a string is a palindrome.
 *
 * Sample Test Cases:
 * Input: madam -> Output: Palindrome
 * Input: hello -> Output: Not palindrome
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int len = strlen(str);
        int pal = 1;
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            if (str[i] != str[j]) {
                pal = 0;
                break;
            }
        }
        if (pal) printf("Palindrome\n");
        else printf("Not palindrome\n");
    }
    return 0;
}
