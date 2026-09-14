/*
 * Question ID: 58
 * Section: Arrays (1D)
 * Problem Statement: Find the maximum and minimum element in an array.
 *
 * Sample Test Cases:
 * Input: 5 2 9 1 4 7 -> Output: Max=9, Min=1
 * Input: 3 10 10 10 -> Output: Max=10, Min=10
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int max_val, min_val;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (i == 0) {
                max_val = min_val = val;
            } else {
                if (val > max_val) max_val = val;
                if (val < min_val) min_val = val;
            }
        }
        printf("Max=%d, Min=%d\n", max_val, min_val);
    }
    return 0;
}
