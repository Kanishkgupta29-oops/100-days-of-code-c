/*
 * Question ID: 61
 * Section: Arrays (1D)
 * Problem Statement: Search for an element in an array using linear search.
 *
 * Sample Test Cases:
 * Input: 5 1 2 3 4 5 3 -> Output: Found at index 2
 * Input: 4 10 20 30 40 25 -> Output: -1
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int target;
        if (scanf("%d", &target) == 1) {
            int found = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == target) {
                    found = i;
                    break;
                }
            }
            if (found != -1) printf("Found at index %d\n", found);
            else printf("-1\n");
        }
    }
    return 0;
}
