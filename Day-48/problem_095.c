/*
 * Question ID: 95
 * Section: Strings
 * Problem Statement: Check if one string is a rotation of another.
 *
 * Sample Test Cases:
 * Input: abcde deabc -> Output: Rotation
 * Input: abc acb -> Output: Not rotation
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1000], s2[1000];
    if (scanf("%999s %999s", s1, s2) == 2) {
        if (strlen(s1) != strlen(s2)) {
            printf("Not rotation\n");
            return 0;
        }
        char temp[2000];
        strcpy(temp, s1);
        strcat(temp, s1);
        if (strstr(temp, s2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }
    return 0;
}
