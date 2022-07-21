#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//5 ni darajasi;
void Log5(int x){
    int f=log(x)/log(5);
    double test=log(x)/log(5);
    if (f==test){printf("true\n");}
    else {printf("false\n");}
}
int main(){
int x;
printf("x sonini kiriting:");
scanf("%d",&x);
Log5(x);
return 0;
}

