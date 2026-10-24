/*
 * Question ID: 119
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 *
 * Sample Test Cases:
 * Input: nums1 = [1,3,3,4] -> Output: 3
 * Input: nums1 = [1,2,2] -> Output: 2
 * Input: nums1 = [0,4,1,1,5] -> Output: 1
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int repeated = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    repeated = arr[i];
                    break;
                }
            }
            if (repeated != -1) break;
        }
        printf("%d\n", repeated);
    }
    return 0;
}
