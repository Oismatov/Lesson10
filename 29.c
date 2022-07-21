#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//tub son;
void DigitCount(int N){
    int m=log(N)/log(10);
    switch(m) {
        case 0: 
        printf("1 xonali son");
            break;

        case 1:
           printf("2 xonali son");
            break;
        case 2:
        printf("3 xonali son");
            break;

        case 3:
           printf("4 xonali son");
            break;
        case 4: 
        printf("5 xonali son");
            break;

        case 5:
           printf("6 xonali son");
            break;
        case 6:
        printf("7 xonali son");
            break;

        case 7:
           printf("8 xonali son");
            break;
        default:
            printf("ko'p xonali son");
    }


    }
   
int main(){
int N;
printf("N sonini kiriting:");
scanf("%d",&N);
DigitCount(N);
return 0;
}

