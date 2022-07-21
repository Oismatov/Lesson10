#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//5 ni darajasi;
void LogN(int N,int K){
    double f= log( K )/log(N);
    int u=f/1;
    if ((f-u)==0){printf("true\n");}
    else {printf("false\n");}
    printf("%lf,  %d\n",f,u);
}
int main(){
int N,K;
printf("N sonini kiriting:");
scanf("%d",&N);
printf("K sonini kiriting:");
scanf("%d",&K);
LogN(N,K);

return 0;
}

