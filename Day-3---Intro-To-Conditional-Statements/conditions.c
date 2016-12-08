#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N;
    scanf("%d",&N);
    while(N>0 && N<101){
        if(N%2 != 0){
            printf("Weird");
            break;
        }
        else
            {
            if(N>=2 && N<=5){
                printf("Not Weird");
                break;
            }
            else if(N>=6 && N<=20){
                printf("Weird");
                break;
            }
            else if(N>20){
                printf("Not Weird");
                break;
            }
        }
    }
    return 0;
}
