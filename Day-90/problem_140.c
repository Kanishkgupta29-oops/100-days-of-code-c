/*
 * Question ID: 140
 * Section: Enum
 * Problem Statement: Define a struct with enum Gender and print person's gender.
 *
 * Sample Test Cases:
 * Input: Gender=MALE -> Output: Male
 */
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main(void) {
    char g_str[20];
    if (scanf("%*[^=]=%19s", g_str) == 1 || scanf("%19s", g_str) == 1) {
        struct Person p;
        if (strcmp(g_str, "MALE") == 0) p.gender = MALE;
        else if (strcmp(g_str, "FEMALE") == 0) p.gender = FEMALE;
        else p.gender = OTHER;

        switch (p.gender) {
            case MALE: printf("Male\n"); break;
            case FEMALE: printf("Female\n"); break;
            default: printf("Other\n"); break;
        }
    }
    return 0;
}
