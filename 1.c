#include <stdio.h>
#include <stdbool.h>
#include <math.h>
double orta(double son, double son2){
    return (son+son2)/2;
}
double geo(double son,double son2){
    return (sqrt(son*son2));
}
int main (){
    double a=12,b=24;
    printf("arif: %lf\n",orta(a,b));
    printf("geo: %lf\n",geo(a,b));
        return 0;
}