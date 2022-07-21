// //is polidrom
// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>
// //polidromligini topish;
// void DigitN(int k,int n){
    
// }
// int main(){
// int x;

// return 0; 
// } 

#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

