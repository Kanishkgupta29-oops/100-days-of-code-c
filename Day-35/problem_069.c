/*
 * Question ID: 69
 * Section: Arrays (1D)
 * Problem Statement: Find the second largest element in an array.
 *
 * Sample Test Cases:
 * Input: 5 10 20 30 40 50 -> Output: 40
 */
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        int first = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val > first) {
                second = first;
                first = val;
            } else if (val > second && val < first) {
                second = val;
            }
        }
        if (second == INT_MIN) printf("No second largest\n");
        else printf("%d\n", second);
    }
    return 0;
}
