/*
 * Question ID: 66
 * Section: Arrays (1D)
 * Problem Statement: Insert an element in a sorted array at the appropriate position.
 *
 * Sample Test Cases:
 * Input: 5 1 2 4 5 6 3 -> Output: 1 2 3 4 5 6
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n + 1];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int val;
        if (scanf("%d", &val) == 1) {
            int i = n - 1;
            while (i >= 0 && arr[i] > val) {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = val;
            for (int j = 0; j <= n; j++) {
                printf("%d%c", arr[j], (j == n ? '\n' : ' '));
            }
        }
    }
    return 0;
}
