#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//sonni raqamlari yig'indisi
void inventdigit(int a){
    int son1,son2,son3,invent;
    son1=a/100;
    son2=(a-son1*100)/10;
    son3=(a-son1*100)%10;
    invent=son1+son2*10+son3*100;
    printf("%d sonining teskarisi %d\n",a,invent);
}
int main(){
int a;
scanf("%d",&a);
inventdigit(a);
    return 0;
}

