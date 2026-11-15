/*
 * Question ID: 141
 * Section: Enum
 * Problem Statement: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 *
 * Sample Test Cases:
 * Input: Name: Asha Roll: 101 Marks: 90 -> Output: Name: Asha | Roll: 101 | Marks: 90
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s;
    if (scanf("%49s %d %d", s.name, &s.roll_no, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    }
    return 0;
}
