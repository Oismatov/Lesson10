#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//pow a,2.3.4
void pow234(double son){
    printf("son^2=%lf\n", pow(son,2));
    printf("son^3=%lf\n", pow(son,3));
    printf("son^4=%lf\n\n", pow(son,4));    
}

int main (){
    for(int i=1; i<20;i++){
    printf ("%d\n",i);
    pow234(i);
    }
    return 0;
}