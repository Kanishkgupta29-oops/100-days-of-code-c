/*
 * Question ID: 132
 * Section: Enum
 * Problem Statement: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
 *
 * Sample Test Cases:
 * Input: GREEN -> Output: Go
 */
#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char input[20];
    if (scanf("%19s", input) == 1) {
        if (strcmp(input, "RED") == 0) {
            printf("Stop\n");
        } else if (strcmp(input, "YELLOW") == 0) {
            printf("Wait\n");
        } else if (strcmp(input, "GREEN") == 0) {
            printf("Go\n");
        }
    }
    return 0;
}
