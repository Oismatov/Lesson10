#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//doira yuzi;
 double RingS(double r1,double r2){
    double pi=3.1415,S1,S2,s;
    S1=pi*r1*r1;
    S2=pi*r2*r2;
    s=fabs(S1-S2);
    return s;
}
int main(){
double r1,r2;
printf("r1 ni kiriting:");
scanf("%lf",&r1);
printf("r2 ni kiriting:");
scanf("%lf",&r2);
printf("%lf",RingS(r1,r2));
    return 0;
}