/*
    Author : Atonu Ghosh
    About : Hacker Rank 30 Days of Code, Day 6 Solution
    Date : 9th Dec 2016
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch[10001];
    int t,c=0,len=0;
    scanf("%d",&t);
    if(t>0 && t<11){
    //printf("Number of test cases : %d\n",t);
    for(int i=1;i<=t;i++){
        scanf("%s[^n]",ch);
        len = strlen(ch);
        if(len<10001 && len>1){
        while (ch[c] != '\0') {
                if (c % 2 == 0) {
                        printf("%c",ch[c]);
                } 
                c++;
        }
        c=0;
        printf(" ");
        while (ch[c] != '\0') {
                if (c % 2 != 0) {
                        printf("%c",ch[c]);
                } 
                c++;
        }
        c=0;
        printf("\n");
    }
    }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
