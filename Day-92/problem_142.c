/*
 * Question ID: 142
 * Section: Enum
 * Problem Statement: Store details of 5 students in an array of structures and print all.
 *
 * Sample Test Cases:
 * Input: Details of 5 students (Name, Roll, Marks) -> Output: Tabular list of all 5 students with their details
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d %d", s[i].name, &s[i].roll_no, &s[i].marks) != 3) {
            break;
        }
    }
    printf("%-10s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-10s %-10d %-10d\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}
