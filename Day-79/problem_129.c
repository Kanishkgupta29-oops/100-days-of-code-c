/*
 * Question ID: 129
 * Section: File Handling
 * Problem Statement: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
 *
 * Sample Test Cases:
 * Input: File: numbers.txt (Content: 10 20 30 40 50) -> Output: Sum = 150 Average = 30.00
 */
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) return 0;
    long long sum = 0;
    int count = 0, val;
    while (fscanf(fp, "%d", &val) == 1) {
        sum += val;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        double avg = (double)sum / count;
        printf("Sum = %lld\nAverage = %.2f\n", sum, avg);
    }
    return 0;
}
