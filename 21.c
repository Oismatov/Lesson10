#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//a dan bgacha sonlar yig'indisi;
int summAtoB(int a,int b){
    if (a>b){return 0;}
    else { int summ=0;
        for(int i=a; i<=b; i++){
        summ+=i;
    }
    return summ;}
}
int main(){
int a,b;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("b sonini kiriting:");
scanf("%d",&b);
printf("%d\n",summAtoB(a,b));
return 0;
}

