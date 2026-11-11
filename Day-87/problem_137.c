/*
 * Question ID: 137
 * Section: Enum
 * Problem Statement: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 *
 * Sample Test Cases:
 * Input: GUEST -> Output: Welcome Guest!
 */
#include <stdio.h>
#include <string.h>

enum UserRole { ADMIN, USER, GUEST };

int main(void) {
    char role[20];
    if (scanf("%19s", role) == 1) {
        enum UserRole r;
        if (strcmp(role, "ADMIN") == 0) r = ADMIN;
        else if (strcmp(role, "USER") == 0) r = USER;
        else r = GUEST;

        switch (r) {
            case ADMIN: printf("Welcome Admin!\n"); break;
            case USER: printf("Welcome User!\n"); break;
            case GUEST: printf("Welcome Guest!\n"); break;
        }
    }
    return 0;
}
