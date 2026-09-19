/*
 * Question ID: 67
 * Section: Arrays (1D)
 * Problem Statement: Insert an element in an array at a given position.
 *
 * Sample Test Cases:
 * Input: 4 10 20 30 40 2 15 -> Output: 10 20 15 30 40
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n + 1];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int pos, val;
        if (scanf("%d %d", &pos, &val) == 2) {
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            for (int i = 0; i <= n; i++) {
                printf("%d%c", arr[i], (i == n ? '\n' : ' '));
            }
        }
    }
    return 0;
}
