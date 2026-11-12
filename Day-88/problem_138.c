/*
 * Question ID: 138
 * Section: Enum
 * Problem Statement: Print all enum names and integer values using a loop.
 *
 * Sample Test Cases:
 * Input: No input -> Output: RED=0 YELLOW=1 GREEN=2
 */
#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = { "RED", "YELLOW", "GREEN" };
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
}
