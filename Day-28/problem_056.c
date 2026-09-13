/*
 * Question ID: 56
 * Section: Arrays (1D)
 * Problem Statement: Read and print elements of a one-dimensional array.
 *
 * Sample Test Cases:
 * Input: 3 10 20 30 -> Output: 10 20 30
 * Input: 5 1 2 3 4 5 -> Output: 1 2 3 4 5
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            printf("%d%c", arr[i], (i == n - 1 ? '\n' : ' '));
        }
    }
    return 0;
}
