/*
 * Question ID: 144
 * Section: Enum
 * Problem Statement: Write a function that accepts a structure as parameter and prints its members.
 *
 * Sample Test Cases:
 * Input: Student: Neha 104 92 -> Output: Name: Neha | Roll: 104 | Marks: 92
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void print_student(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void) {
    struct Student s;
    if (scanf("%49s %d %d", s.name, &s.roll_no, &s.marks) == 3) {
        print_student(s);
    }
    return 0;
}
