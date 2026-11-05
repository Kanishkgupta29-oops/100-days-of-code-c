/*
 * Question ID: 131
 * Section: Enum
 * Problem Statement: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
 *
 * Sample Test Cases:
 * Input: No input -> Output: SUNDAY = 0 MONDAY = 1 TUESDAY = 2 WEDNESDAY = 3 THURSDAY = 4 FRIDAY = 5 SATURDAY = 6
 */
#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void) {
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };
    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d], d);
    }
    return 0;
}
