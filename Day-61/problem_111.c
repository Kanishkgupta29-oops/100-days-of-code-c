/*
 * Question ID: 111
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
 *
 * Sample Test Cases:
 * Input: arr[] = [-8, 2, 3, -6, 10], k = 2 -> Output: -8 0 -6 -6
 * Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3 -> Output: -1 -1 -7 -15 -15 0
 * Input: arr[] = [12, 1, 3, 5], k = 3 -> Output: 0 0
 */
#include <stdio.h>

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2 && n >= k && k > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for (int i = 0; i <= n - k; i++) {
            int first_neg = 0;
            for (int j = 0; j < k; j++) {
                if (arr[i + j] < 0) {
                    first_neg = arr[i + j];
                    break;
                }
            }
            printf("%d%c", first_neg, (i == n - k ? '\n' : ' '));
        }
    }
    return 0;
}
