/*
 * Question ID: 3
 * Section: User Inputs, Operations & Output
 * Problem Statement: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 *
 * Sample Test Cases:
 * Input: 5 10 -> Output: Area=50, Perimeter=30
 * Input: 3 7 -> Output: Area=21, Perimeter=20
 */
#include <stdio.h>

int main(void) {
    int length, breadth;
    if (scanf("%d %d", &length, &breadth) == 2) {
        printf("Area=%d, Perimeter=%d\n", length * breadth, 2 * (length + breadth));
    }
    return 0;
}
