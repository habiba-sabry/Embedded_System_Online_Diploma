#include<stdio.h>

int power(int x,int y){
    if(y!=0){
        return x*power(x,y-1);
    }
    else {
        return 1;
    }
}
int main(){
    int x,y;
    printf("Enter base number: ");
    scanf("%d",&x);
    printf("Enter power number(positive integer): ");
    scanf("%d",&y);
    int A=power(x,y);
    printf("%d^%d = %d",x,y,A);

    return 0;
}

