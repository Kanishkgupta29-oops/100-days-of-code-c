/*
 * Question ID: 113
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 *
 * Sample Test Cases:
 * Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4 -> Output: 5
 * Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3 -> Output: 7
 */
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2 && k >= 1 && k <= n) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        qsort(arr, n, sizeof(int), cmp);
        printf("%d\n", arr[k - 1]);
    }
    return 0;
}
