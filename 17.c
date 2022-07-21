#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//kv tenglama ildizlarini aniqlovchi programma;
void kv(int a,int b, int c){
    double x1,x2;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%lf,x2=%lf\n", x1,x2);
}
int main(){
int a,b,c;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("b sonini kiriting:");
scanf("%d",&b);
printf("c sonini kiriting:");
scanf("%d",&c);
printf("%dx^2 + %d x+ %d = 0 tenlama yechimi: \n",a,b,c);
kv(a,b,c);
    return 0;
}

