#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void RadtoDec(int k){
 double r=k*180/3.1415;
    printf("%d radian %.2lf gradus bo'ladi\n",k,r);
}
int main(){
int g=3;
RadtoDec(g);
return 0;
}

