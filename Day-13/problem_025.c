/*
 * Question ID: 25
 * Section: Conditional Statements
 * Problem Statement: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 *
 * Sample Test Cases:
 * Input: 4 2 + -> Output: 6
 * Input: 10 3 % -> Output: 1
 * Input: 15 5 / -> Output: 3
 */
#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    if (scanf("%d %d %c", &a, &b, &op) == 3) {
        switch (op) {
            case '+': printf("%d\n", a + b); break;
            case '-': printf("%d\n", a - b); break;
            case '*': printf("%d\n", a * b); break;
            case '/': 
                if (b != 0) printf("%d\n", a / b);
                else printf("Error: Division by zero\n");
                break;
            case '%':
                if (b != 0) printf("%d\n", a % b);
                else printf("Error: Modulo by zero\n");
                break;
            default: printf("Invalid operator\n"); break;
        }
    }
    return 0;
}
