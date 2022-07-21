#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//sonni raqamlari yig'indisi
void Digitcountsum(int a){
    int son1,son2,son3,summ;
    son1=a/100;
    son2=(a-son1*100)/10;
    son3=(a-son1*100)%10;
    summ=son1+son2+son3;
    printf("%d sonining Digitcountsum=%d\n",a,summ);
}
int main(){
int a;
scanf("%d",&a);
Digitcountsum(a);
    return 0;
}

