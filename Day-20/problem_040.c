/*
 * Question ID: 40
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to find the 1’s complement of a binary number and print it.
 *
 * Sample Test Cases:
 * Input: 1010 -> Output: 0101
 * Input: 1111 -> Output: 0000
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char binary[100];
    if (scanf("%99s", binary) == 1) {
        for (int i = 0; binary[i] != '\0'; i++) {
            if (binary[i] == '0') {
                binary[i] = '1';
            } else if (binary[i] == '1') {
                binary[i] = '0';
            }
        }
        printf("%s\n", binary);
    }
    return 0;
}
