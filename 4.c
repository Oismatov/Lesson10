#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//uchburchak yuzasi va perimetri
void TRIANGLE(double tomon){

    printf("p=%lf\n",tomon*3);
    printf("S=%lf\n",pow(tomon,2)*pow(3,0.5)/3);
}
int main(){
double a=5;
TRIANGLE(a);
    return 0;
}


//     printf("o'rta Arifmetik=%lf\n", (son1+son2)/2);
//     printf("o'rta Geometrik=%lf\n", sqrt(son1*son2));
// }

// int main (){
//     int f=36,i=66;
    
//     MEAN(i,f);
    
//     return 0;
// }