/*
 * Question ID: 64
 * Section: Arrays (1D)
 * Problem Statement: Find the digit that occurs the most times in an integer number.
 *
 * Sample Test Cases:
 * Input: 112233 -> Output: 1
 * Input: 887799 -> Output: 7
 */
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        int freq[10] = {0};
        if (n == 0) freq[0] = 1;
        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }
        int max_digit = 0;
        int max_count = 0;
        for (int d = 0; d < 10; d++) {
            if (freq[d] > max_count) {
                max_count = freq[d];
                max_digit = d;
            }
        }
        printf("%d\n", max_digit);
    }
    return 0;
}
