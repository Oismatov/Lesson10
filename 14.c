#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//o'nga siljitish;
void Shiftright3(int a,int b, int c){
    int a1=a,b1=b,c1=c;
    b=c1; c=a1; a=b1;
    printf("%d,%d,%d", a,b,c);
}
int main(){
int a,b,c,d;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("b sonini kiriting:");
scanf("%d",&b);
printf("c sonini kiriting:");
scanf("%d",&c);
printf("%d,%d,%d sonlarini o'nga siljitganda: ",a,b,c);
Shiftright3(a,b,c);
    return 0;
}

