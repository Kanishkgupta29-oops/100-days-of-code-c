/*
 * Question ID: 109
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 *
 * Sample Test Cases:
 * Input: arr[100, 200, 300, 400] = , k = 2 -> Output: 700
 * Input: arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4 -> Output: 39
 * Input: arr[100, 200, 300, 400] = , k = 1 -> Output: 400
 */
#include <stdio.h>

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2 && n >= k && k > 0) {
        long long arr[n];
        for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
        long long current_sum = 0;
        for (int i = 0; i < k; i++) current_sum += arr[i];
        long long max_sum = current_sum;
        for (int i = k; i < n; i++) {
            current_sum += arr[i] - arr[i - k];
            if (current_sum > max_sum) max_sum = current_sum;
        }
        printf("%lld\n", max_sum);
    }
    return 0;
}
