/*
 * Question ID: 115
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
 *
 * Sample Test Cases:
 * Input: s = "anagram", t = "nagaram" -> Output: Anagram
 * Input: s = "rat", t = "car" -> Output: Not Anagram
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], t[1000];
    if (scanf("%999s %999s", s, t) == 2) {
        if (strlen(s) != strlen(t)) {
            printf("Not Anagram\n");
            return 0;
        }
        int freq[26] = {0};
        for (int i = 0; s[i] != '\0'; i++) freq[s[i] - 'a']++;
        for (int i = 0; t[i] != '\0'; i++) freq[t[i] - 'a']--;
        int valid = 1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                valid = 0;
                break;
            }
        }
        if (valid) printf("Anagram\n");
        else printf("Not Anagram\n");
    }
    return 0;
}
