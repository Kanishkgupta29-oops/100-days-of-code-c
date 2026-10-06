/*
 * Question ID: 101
 * Section: Logic Enhancers
 * Problem Statement: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 *
 * Sample Test Cases:
 * Input: nums = [5,7,7,8,8,10], target = 8 -> Output: 3,4
 * Input:  nums = [5,7,7,8,8,10], target = 6 -> Output: -1,-1
 * Input:  nums = [5,7,7,8,8,10], target = 10 -> Output: 5,5
 * Note: Follow-up(optional): Can you do it in O(log n) Time Complexity?
 */
#include <stdio.h>

int main(void) {
    int n, target;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        if (scanf("%d", &target) == 1) {
            int first = -1, last = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == target) {
                    if (first == -1) first = i;
                    last = i;
                }
            }
            printf("%d,%d\n", first, last);
        }
    }
    return 0;
}
