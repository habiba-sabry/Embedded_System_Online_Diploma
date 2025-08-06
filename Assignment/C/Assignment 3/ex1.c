#include<stdio.h>

int prime(int i){
    int x=0;
    for(int j=2; j<=i/2;j++){
        if(i%j==0){
            x=1;
            break;
        }
    }
    return x;
}

int main(){
    int n1,n2,x;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n1,&n2);
    printf("Prime numbers between %d and %d are: ",n1,n2);
    for(int i=n1+1;i<n2;i++){
        x= prime(i);
        if(x==0){
             printf("%d ",i);
        }
    }
    return 0;
}
