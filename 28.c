#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//tub son;
void Isprime(int N){
    int m=0,f;
    for(int i=2;i<=sqrt(N);i++){ f=N%i;if(f==0) {m++;}}
    if(m==0){printf("tub son\n");}
    else {printf("tub son emas");}
    }
int main(){
int N;
printf("N sonini kiriting:");
scanf("%d",&N);
Isprime(N);
return 0;
}

