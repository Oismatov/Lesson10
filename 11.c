#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//o'rnini almashtiradigan funksiya a ni qiymatini bga beradi;
int Min(int a,int b){
   
    if (a>b){
        return b;
    }
    if (a<=b){
        return a;
    }
}
int main(){
int a,b,c,d,f,g,m;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("b sonini kiriting:");
scanf("%d",&b);
printf("c sonini kiriting:");
scanf("%d",&c);
printf("d sonini kiriting:");
scanf("%d",&d);
f=Min(a,b);
g=Min(c,d);
m=Min(f,g);
printf("%d,%d,%d,%d sonlarining minimumi %d.\n",a,b,c,d,m);
    return 0;
}

