/*
 * Question ID: 114
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 *
 * Sample Test Cases:
 * Input: s = "abcabcbb" -> Output: 3
 * Input: s = "bbbbb" -> Output: 1
 * Input: s = "pwwkew" -> Output: 3
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (scanf("%999s", s) == 1) {
        int last_pos[256];
        for (int i = 0; i < 256; i++) last_pos[i] = -1;
        int max_len = 0, start = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            unsigned char c = (unsigned char)s[i];
            if (last_pos[c] >= start) {
                start = last_pos[c] + 1;
            }
            last_pos[c] = i;
            int len = i - start + 1;
            if (len > max_len) max_len = len;
        }
        printf("%d\n", max_len);
    }
    return 0;
}
