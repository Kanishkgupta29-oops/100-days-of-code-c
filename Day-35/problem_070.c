/*
 * Question ID: 70
 * Section: Arrays (1D)
 * Problem Statement: Rotate an array to the right by k positions.
 *
 * Sample Test Cases:
 * Input: 5 1 2 3 4 5 2 -> Output: 4 5 1 2 3
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int k;
        if (scanf("%d", &k) == 1) {
            k = k % n;
            int rotated[n];
            for (int i = 0; i < n; i++) {
                rotated[(i + k) % n] = arr[i];
            }
            for (int i = 0; i < n; i++) {
                printf("%d%c", rotated[i], (i == n - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
