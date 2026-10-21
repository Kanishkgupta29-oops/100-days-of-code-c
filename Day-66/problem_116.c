/*
 * Question ID: 116
 * Section: Logic Enhancers
 * Problem Statement: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
 *
 * Sample Test Cases:
 * Input: nums = [2,7,11,15], target = 9 -> Output: 0 1
 * Input: nums = [3,2,4], target = 6 -> Output: 1 2
 * Input: nums = [3,3], target = 6 -> Output: 0 1
 */
#include <stdio.h>

int main(void) {
    int n, target;
    if (scanf("%d %d", &n, &target) == 2 && n > 0) {
        int nums[n];
        for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    idx1 = i;
                    idx2 = j;
                    break;
                }
            }
            if (idx1 != -1) break;
        }
        if (idx1 != -1) printf("%d %d\n", idx1, idx2);
        else printf("-1 -1\n");
    }
    return 0;
}
