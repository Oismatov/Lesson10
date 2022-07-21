#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Fibn(int n){
 int F1=1, F2=1,F3;
    for(int i=3; i<=n+1;i++){
        F3=F1+F2;
        F1=F2;
        F2=F3;
    }
    printf("%d\n",F3);}
int main(){
int n;
printf("N sonini kiriting:");
scanf("%d",&n);
Fibn(n);
return 0;
}

