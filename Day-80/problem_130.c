/*
 * Question ID: 130
 * Section: File Handling
 * Problem Statement: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
 *
 * Sample Test Cases:
 * Input: Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92 -> Output: Name: Asha | Roll: 101 | Marks: 85 Name: Ravi | Roll: 102 | Marks: 92
 */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        struct Student s[n];
        for (int i = 0; i < n; i++) {
            scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        }
        FILE *fp = fopen("students.txt", "w");
        if (fp != NULL) {
            for (int i = 0; i < n; i++) {
                fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
            }
            fclose(fp);
        }
        fp = fopen("students.txt", "r");
        if (fp != NULL) {
            struct Student temp;
            while (fscanf(fp, "%49s %d %d", temp.name, &temp.roll, &temp.marks) == 3) {
                printf("Name: %s | Roll: %d | Marks: %d\n", temp.name, temp.roll, temp.marks);
            }
            fclose(fp);
        }
    }
    return 0;
}
