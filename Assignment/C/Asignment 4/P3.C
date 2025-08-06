#include<stdio.h>

int main(){
    char a[]={"w3resource"};
    char* p;
    int n=sizeof(a)/sizeof(a[0]);
    p = &a[n-2];
    printf("Input a string : %s\n", a);
    printf("Reverse of the string is : ");
    for(int i=n-2;i>=0;i--){
        printf("%c",*p);
        *p--;
    }
    return 0;

}

