/*
 * Question ID: 149
 * Section: Enum
 * Problem Statement: Use malloc() to allocate structure memory dynamically and print details.
 *
 * Sample Test Cases:
 * Input: Student allocated dynamically with details: Tina 105 88 -> Output: Name: Tina | Roll: 105 | Marks: 88
 */
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s != NULL) {
        if (scanf("%49s %d %d", s->name, &s->roll_no, &s->marks) == 3) {
            printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);
        }
        free(s);
    }
    return 0;
}
