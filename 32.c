#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//DectoRad;
void DectoRad(int g){
    double r=g*3.1415/180;
    printf("%d gradus %.2lf radian bo'ladi\n",g,r);
}
int main(){
int g=60;
DectoRad(g);
return 0;
}

