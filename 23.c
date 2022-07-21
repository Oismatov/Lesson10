#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//kalkulyator;
void Calc(int a,int b,int ob){
    
     
   if (ob==1){ printf("%d",a-b);}
    else if(ob==2){ printf("%d",a*b); }
    else if(ob==3){printf("%d",a/b);}
    else if(ob!=1 && ob!=2 && ob!=3) { printf("%d",a+b);}
}
int main(){
int x,y,op,n;
printf("x sonini kiriting:");
scanf("%d",&x);
printf("y sonini kiriting:");
scanf("%d",&y);
printf("op sonini kiriting:");
scanf("%d",&op);
Calc(x,y,op);
return 0;
}