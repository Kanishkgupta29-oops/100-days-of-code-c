/*
 * Question ID: 41
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to swap the first and last digit of a number.
 *
 * Sample Test Cases:
 * Input: 1234 -> Output: 4231
 * Input: 1001 -> Output: 1001
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char num[100];
    if (scanf("%99s", num) == 1) {
        int len = strlen(num);
        if (len > 1) {
            char temp = num[0];
            num[0] = num[len - 1];
            num[len - 1] = temp;
        }
        printf("%s\n", num);
    }
    return 0;
}
