#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void power(int a,int b){
 int daraja=1;
    if (b==0) {printf("%d\n",daraja);}
    else {
    for(int i=1; i<b+1;i++){
        daraja*=a;
    }
    printf("%d\n",daraja);}}

int main(){
int a,n;
printf("a sonini kiriting:");
scanf("%d",&a);
printf("n darajasini kiriting:");
scanf("%d",&n);
power(a,n);
return 0;
}

