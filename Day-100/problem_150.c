/*
 * Question ID: 150
 * Section: Enum
 * Problem Statement: Use pointer to struct to modify and display data using -> operator.
 *
 * Sample Test Cases:
 * Input: Student pointer modifying values: John 106 91 -> Output: Modified Data: Name: John | Roll: 106 | Marks: 91
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s;
    struct Student *ptr = &s;
    if (scanf("%49s %d %d", ptr->name, &ptr->roll_no, &ptr->marks) == 3) {
        printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll_no, ptr->marks);
    }
    return 0;
}
