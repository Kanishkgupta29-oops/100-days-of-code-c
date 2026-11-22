/*
 * Question ID: 148
 * Section: Enum
 * Problem Statement: Take two structs as input and check if they are identical.
 *
 * Sample Test Cases:
 * Input: Student1: Asha 101 90 Student2: Asha 101 90 -> Output: Same
 */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s1, s2;
    if (scanf("%49s %d %d", s1.name, &s1.roll_no, &s1.marks) == 3 &&
        scanf("%49s %d %d", s2.name, &s2.roll_no, &s2.marks) == 3) {
        if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
            printf("Same\n");
        } else {
            printf("Different\n");
        }
    }
    return 0;
}
