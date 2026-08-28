/*
 * Question ID: 24
 * Section: Conditional Statements
 * Problem Statement: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
 *
 * Sample Test Cases:
 * Input: 50 -> Output: Bill: ₹250
 * Input: 150 -> Output: Bill: ₹850
 * Input: 250 -> Output: Bill: ₹1700
 */
#include <stdio.h>

int main(void) {
    double units;
    if (scanf("%lf", &units) == 1) {
        double bill = 0;
        if (units <= 100) {
            bill = units * 5;
        } else if (units <= 200) {
            bill = 100 * 5 + (units - 100) * 7;
        } else if (units <= 300) {
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        } else {
            bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
        }
        printf("Bill: ₹%.0f\n", bill);
    }
    return 0;
}
