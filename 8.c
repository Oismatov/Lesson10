#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//chap tarafiga butun sonni yozish
void inventdigit(int a,int b){
    int invent;
    invent=b*1000+a;
    printf("%d sonining chap tafafiga %d ni yozsa, %d soni bo'ladi\n",a,b,invent);
}
int main(){
int a,b;
printf("3 xonali sonni kiriting:");
scanf("%d",&a);
printf("1 xonali sonni kiriting:");
scanf("%d",&b);
inventdigit(a,b);
    return 0;
}

