#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//doira yuzi;
 double doira(double r){
    double pi=3.1415,S;
    S=pi*r*r;
    return S;
}
int main(){
double r1,S;
printf("r ni kiriting:");
scanf("%lf",&r1);
S=doira(r1);
printf("%lf",S);
    return 0;
}