#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//Tog'ri to'rtburchak yuzasi va perimetri
void RectPS(double a, double b){

    printf("p=%lf\n",2*(a+b));
    printf("S=%lf\n",a*b);
}
int main(){
double a=5,b=6;
RectPS(a,b);
    return 0;
}

