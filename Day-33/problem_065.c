/*
 * Question ID: 65
 * Section: Arrays (1D)
 * Problem Statement: Search in a sorted array using binary search.
 *
 * Sample Test Cases:
 * Input: 5 1 3 5 7 9 7 -> Output: Found at index 3
 * Input: 5 1 3 5 7 9 6 -> Output: -1
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int target;
        if (scanf("%d", &target) == 1) {
            int low = 0, high = n - 1, found = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == target) {
                    found = mid;
                    break;
                } else if (arr[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (found != -1) printf("Found at index %d\n", found);
            else printf("-1\n");
        }
    }
    return 0;
}
