#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//sonlarni tartiblash;
void Sortlnc(int a,int b, int c){
    if (a>b && b>c){ printf("%d,%d,%d",a,b,c);}
    if (a>c && c>b){ printf("%d,%d,%d",a,c,b);}
    if (b>a && a>c){ printf("%d,%d,%d",b,a,c);}
    if (b>c && c>a){ printf("%d,%d,%d",b,c,a);}
    if (c>a && a>b){ printf("%d,%d,%d",c,a,b);}
    if (c>b && b>a){ printf("%d,%d,%d",c,b,a);}
}
int main(){
int a,b,c,d;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("b sonini kiriting:");
scanf("%d",&b);
printf("c sonini kiriting:");
scanf("%d",&c);
printf("%d,%d,%d sonlari kamayish tartibida: ",a,b,c);
Sortlnc(a,b,c);
    return 0;
}

