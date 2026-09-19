/*
 * Question ID: 68
 * Section: Arrays (1D)
 * Problem Statement: Delete an element from an array.
 *
 * Sample Test Cases:
 * Input: 5 1 2 3 4 5 2 -> Output: 1 2 4 5
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int pos;
        if (scanf("%d", &pos) == 1) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            for (int i = 0; i < n - 1; i++) {
                printf("%d%c", arr[i], (i == n - 2 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
