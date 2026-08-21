/*
 * Question ID: 10
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 *
 * Sample Test Cases:
 * Input: 3661 -> Output: 1:1:1
 * Input: 7322 -> Output: 2:2:2
 */
#include <stdio.h>

int main(void) {
    long long total_seconds;
    if (scanf("%lld", &total_seconds) == 1) {
        long long hours = total_seconds / 3600;
        long long minutes = (total_seconds % 3600) / 60;
        long long seconds = total_seconds % 60;
        printf("%lld:%lld:%lld\n", hours, minutes, seconds);
    }
    return 0;
}
