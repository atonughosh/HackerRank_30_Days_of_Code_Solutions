/*
    Author : Atonu Ghsoh
    About : Hacker Rank 30 Days of Code, Day 2 Solution
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float mealCost,tipPercent,taxPercent,tip,tax,totalCost;
    int finalCost;
    scanf("%f",&mealCost);
    scanf("%f",&tipPercent);
    scanf("%f",&taxPercent);
    tip=mealCost*(tipPercent/100);
    tax=mealCost*(taxPercent/100);
    totalCost = mealCost + tip + tax;
    finalCost = round(totalCost);
    printf("The total meal cost is %d dollars.",finalCost);
    return 0;
}
