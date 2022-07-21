#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//to'g'ri burchakli uchburchak;
void TriangleP(double a,double b){
    double c,p;
    c=sqrt(a*a+b*b);
    p=a+b+c;
    printf("%0.1lf va %0.1lf tomonli to'g'ri burchakli uchburchak gipotenuzasi %0.1lf  perimetri esa %0.1lf \n",a,b,c,p);
}
int main(){
double a,b;
printf("a sonini kiriting:");
scanf("%lf",&a);
printf("b sonini kiriting:");
scanf("%lf",&b);
TriangleP(a,b);
return 0;
}

