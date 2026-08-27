/*
 * Question ID: 22
 * Section: Conditional Statements
 * Problem Statement: Write a program to find profit or loss percentage given cost price and selling price.
 *
 * Sample Test Cases:
 * Input: 1000 1200 -> Output: Profit 20%
 * Input: 1000 800 -> Output: Loss 20%
 * Input: 1000 1000 -> Output: No Profit No Loss
 */
#include <stdio.h>

int main(void) {
    double cp, sp;
    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (sp > cp) {
            double profit_pct = ((sp - cp) / cp) * 100.0;
            printf("Profit %.0f%%\n", profit_pct);
        } else if (cp > sp) {
            double loss_pct = ((cp - sp) / cp) * 100.0;
            printf("Loss %.0f%%\n", loss_pct);
        } else {
            printf("No Profit No Loss\n");
        }
    }
    return 0;
}
