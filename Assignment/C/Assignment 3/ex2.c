#include<stdio.h>

int factorial(int x){
    if(x==0 || x==1){
            return 1;
    }
    else {
            return x * factorial(x-1);
    }
}

int main(){
   int x;
   printf("Enter a positive integer: ");
   scanf("%d",&x);
   int f = factorial(x);
   printf("Factorial of %d = %d", x , f);
   return 0;
}

