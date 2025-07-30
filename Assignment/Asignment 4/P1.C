#include<stdio.h>

int main(){
    int m=29;
    printf("Address of m : %p\n",&m);
    printf("Value of m : %d\n",m);
    printf("\n");

    int* ab= &m;
    printf("Address of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d",*ab);
    printf("\n");

    m =34;
    printf("Address of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    printf("\n");

    *ab = 7;
    printf("Address of m : %p\n",&m);
    printf("Value of m : %d\n",m);
    printf("\n");

    return 0;

}
