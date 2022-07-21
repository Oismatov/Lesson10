#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//pow a,2.3.4
double MEAN(double son1,double son2){
    return (son1+son2)/2;
    //printf("o'rta Arifmetik=%lf\n", (son1+son2)/2);
    //printf("o'rta Geometrik=%lf\n", sqrt(son1*son2));
}
double MEAN1(double son1,double son2){
    return sqrt(son1*son2);
    //printf("o'rta Arifmetik=%lf\n", (son1+son2)/2);
    //printf("o'rta Geometrik=%lf\n", sqrt(son1*son2));
}

int main (){
    int f=36,i=25;
    
    printf("%lf , %lf\n",MEAN(i,f),MEAN1(i,f));
    
    return 0;
}