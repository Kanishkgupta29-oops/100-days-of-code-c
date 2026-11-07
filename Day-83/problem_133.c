/*
 * Question ID: 133
 * Section: Enum
 * Problem Statement: Create an enum for months and print how many days each month has.
 *
 * Sample Test Cases:
 * Input: FEB -> Output: 28 or 29 days
 */
#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void) {
    char input[20];
    if (scanf("%19s", input) == 1) {
        if (strcasecmp(input, "FEB") == 0 || strcasecmp(input, "February") == 0) {
            printf("28 or 29 days\n");
        } else if (strcasecmp(input, "APR") == 0 || strcasecmp(input, "JUN") == 0 ||
                   strcasecmp(input, "SEP") == 0 || strcasecmp(input, "NOV") == 0) {
            printf("30 days\n");
        } else {
            printf("31 days\n");
        }
    }
    return 0;
}
