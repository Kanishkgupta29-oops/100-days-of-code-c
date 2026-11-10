/*
 * Question ID: 136
 * Section: Enum
 * Problem Statement: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 *
 * Sample Test Cases:
 * Input: ADD 10 20 -> Output: 30
 */
#include <stdio.h>
#include <string.h>

enum MenuChoice { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char op[20];
    int a, b;
    if (scanf("%19s %d %d", op, &a, &b) == 3) {
        enum MenuChoice choice;
        if (strcmp(op, "ADD") == 0) choice = ADD;
        else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
        else choice = MULTIPLY;

        switch (choice) {
            case ADD: printf("%d\n", a + b); break;
            case SUBTRACT: printf("%d\n", a - b); break;
            case MULTIPLY: printf("%d\n", a * b); break;
        }
    }
    return 0;
}
