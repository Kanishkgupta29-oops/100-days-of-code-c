/*
 * Question ID: 121
 * Section: File Handling
 * Problem Statement: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 *
 * Sample Test Cases:
 * Input: Name: Rahul, Age: 23 -> Output: File created successfully! Data written to info.txt
 */
#include <stdio.h>

int main(void) {
    char name[100];
    int age;
    if (scanf("%99s %d", name, &age) == 2) {
        FILE *fp = fopen("info.txt", "w");
        if (fp != NULL) {
            fprintf(fp, "Name: %s\nAge: %d\n", name, age);
            fclose(fp);
            printf("File created successfully! Data written to info.txt\n");
        }
    }
    return 0;
}
