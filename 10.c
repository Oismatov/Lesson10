#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//o'rnini almashtiradigan funksiya a ni qiymatini bga beradi;
void swap(int a,int b){
    int swapn=a;
    a=b; b=swapn;
    printf("a=%d b=%d ,yangilanganda a=%d b=%d bo'ladi\n",b,a,a,b);
}
int main(){
int a,b;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("b sonini kiriting:");
scanf("%d",&b);
swap(a,b);
    return 0;
}

