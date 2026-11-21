/*
 * Question ID: 147
 * Section: Enum
 * Problem Statement: Store employee data in a binary file using fwrite() and read using fread().
 *
 * Sample Test Cases:
 * Input: Employee details entered and stored in file. -> Output: Displays employee data read from file.
 */
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    double salary;
};

int main(void) {
    struct Employee emp_in;
    if (scanf("%49s %d %lf", emp_in.name, &emp_in.id, &emp_in.salary) == 3) {
        FILE *fp = fopen("employee.bin", "wb");
        if (fp != NULL) {
            fwrite(&emp_in, sizeof(struct Employee), 1, fp);
            fclose(fp);
        }
        struct Employee emp_out;
        fp = fopen("employee.bin", "rb");
        if (fp != NULL) {
            if (fread(&emp_out, sizeof(struct Employee), 1, fp) == 1) {
                printf("Name: %s | ID: %d | Salary: %.2f\n", emp_out.name, emp_out.id, emp_out.salary);
            }
            fclose(fp);
        }
    }
    return 0;
}
