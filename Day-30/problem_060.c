/*
 * Question ID: 60
 * Section: Arrays (1D)
 * Problem Statement: Count positive, negative, and zero elements in an array.
 *
 * Sample Test Cases:
 * Input: 5 -1 0 1 2 -2 -> Output: Positive=2, Negative=2, Zero=1
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int pos = 0, neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val > 0) pos++;
            else if (val < 0) neg++;
            else zero++;
        }
        printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    }
    return 0;
}
