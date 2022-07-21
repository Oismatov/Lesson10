#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//a dan bgacha sonlar yig'indisi;
int Quarter(int x,int y){
    if (x>0 && y>0){return 1;}
    if (x<0 && y>0){return 2;}
    if (x<0 && y<0){return 3;}
    if (x>0 && y<0){return 4;}
}
int main(){
int x,y;
printf("x sonini kiriting:");
scanf("%d",&x);
printf("y sonini kiriting:");
scanf("%d",&y);
printf("%d\n",Quarter(x,y));
return 0;
}

