/*
    About : Hacker Rank 30 Days of Code Challenge, Day 9
    Date : 11th Dec 2016
    Author : Atonu Ghosh
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main() {
    int n,result=0;
    scanf("%d",&n);
    if(n>=2 && n<=12)
        result = factorial(n);
    printf("%d",result);
    return 0;
}
