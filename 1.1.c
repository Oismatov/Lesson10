#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//pow a,3
double pow3(double son){
    return pow(son,3);
}

int main (){
    for(int i=1; i<20;i++){
    printf("POW3: %0.1lf\n",pow3(i));
    }
    return 0;
}