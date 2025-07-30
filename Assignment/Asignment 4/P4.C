#include<stdio.h>

int main(){
    int a[15]={2,3,4,5,6};
    int *p= &a[4];
    int j=5;
    for (int i=4;i>=0;i--,j--){
        printf("element - %d : %d\n",j, *p);
        *p--;
    }

    return 0;

}

