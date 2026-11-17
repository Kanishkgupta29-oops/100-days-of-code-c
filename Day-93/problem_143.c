/*
 * Question ID: 143
 * Section: Enum
 * Problem Statement: Find and print the student with the highest marks.
 *
 * Sample Test Cases:
 * Input: 3 students: Ravi 101 95, Sita 102 85, Aman 103 88 -> Output: Topper: Ravi (Marks: 95)
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        struct Student s[n];
        int max_idx = 0;
        for (int i = 0; i < n; i++) {
            scanf("%49s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
            if (s[i].marks > s[max_idx].marks) {
                max_idx = i;
            }
        }
        printf("Topper: %s (Marks: %d)\n", s[max_idx].name, s[max_idx].marks);
    }
    return 0;
}
