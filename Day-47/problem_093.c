/*
 * Question ID: 93
 * Section: Strings
 * Problem Statement: Check if two strings are anagrams of each other.
 *
 * Sample Test Cases:
 * Input: listen silent -> Output: Anagrams
 * Input: hello world -> Output: Not anagrams
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1000], s2[1000];
    if (scanf("%999s %999s", s1, s2) == 2) {
        if (strlen(s1) != strlen(s2)) {
            printf("Not anagrams\n");
            return 0;
        }
        int freq[256] = {0};
        for (int i = 0; s1[i] != '\0'; i++) freq[(unsigned char)s1[i]]++;
        for (int i = 0; s2[i] != '\0'; i++) freq[(unsigned char)s2[i]]--;
        int anagram = 1;
        for (int i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                anagram = 0;
                break;
            }
        }
        if (anagram) printf("Anagrams\n");
        else printf("Not anagrams\n");
    }
    return 0;
}
