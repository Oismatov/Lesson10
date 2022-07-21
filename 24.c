#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//butun sonni juft yoki toqligi;
void Even(int x){
    int f=x/2;
    if (x-(f*2)==0){printf("juft son\n");}
    if (x-(f*2)!=0) {printf("toq son\n");}
}
int main(){
int x;
printf("x sonini kiriting:");
scanf("%d",&x);
Even(x);
return 0;
}

