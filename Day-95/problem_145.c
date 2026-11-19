/*
 * Question ID: 145
 * Section: Enum
 * Problem Statement: Return a structure containing top student's details from a function.
 *
 * Sample Test Cases:
 * Input: 3 students: Riya 101 89, Karan 102 96, Meena 103 92 -> Output: Top Student: Karan | Roll: 102 | Marks: 96
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student find_top_student(struct Student arr[], int n) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[max_idx].marks) {
            max_idx = i;
        }
    }
    return arr[max_idx];
}

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        struct Student s[n];
        for (int i = 0; i < n; i++) {
            scanf("%49s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        }
        struct Student top = find_top_student(s, n);
        printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    }
    return 0;
}
