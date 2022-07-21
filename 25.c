#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//butun sonni juft yoki toqligi;
bool IsSquare(int x){
    int f=sqrt(x),t;
    t=f;
    if (x-pow(t,2)==0){return true;}
    else  {return false;}
}
int main(){
for (int i=1; i<50;i++) {
    printf("%d soni %d\n",i,IsSquare(i));
}
return 0;
}

