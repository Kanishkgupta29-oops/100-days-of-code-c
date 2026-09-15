/*
 * Question ID: 59
 * Section: Arrays (1D)
 * Problem Statement: Count even and odd numbers in an array.
 *
 * Sample Test Cases:
 * Input: 6 1 2 3 4 5 6 -> Output: Even=3, Odd=3
 * Input: 4 2 4 6 8 -> Output: Even=4, Odd=0
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val % 2 == 0) even++;
            else odd++;
        }
        printf("Even=%d, Odd=%d\n", even, odd);
    }
    return 0;
}
