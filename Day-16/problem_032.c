/*
 * Question ID: 32
 * Section: Loops without Arrays/Strings
 * Problem Statement: Write a program to check if a number is a palindrome.
 *
 * Sample Test Cases:
 * Input: 121 -> Output: Palindrome
 * Input: 123 -> Output: Not palindrome
 */
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long orig = n;
        long long rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        if (orig == rev) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}
