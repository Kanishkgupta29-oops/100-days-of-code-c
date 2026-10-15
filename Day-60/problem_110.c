/*
 * Question ID: 110
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 *
 * Sample Test Cases:
 * Input: arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3 -> Output: 3 3 4 5 5 5 6
 * Input: arr[5, 1, 3, 4, 2] = , k = 1 -> Output: 5 1 3 4 2
 */
#include <stdio.h>

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2 && n >= k && k > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for (int i = 0; i <= n - k; i++) {
            int max_val = arr[i];
            for (int j = 1; j < k; j++) {
                if (arr[i + j] > max_val) max_val = arr[i + j];
            }
            printf("%d%c", max_val, (i == n - k ? '\n' : ' '));
        }
    }
    return 0;
}
