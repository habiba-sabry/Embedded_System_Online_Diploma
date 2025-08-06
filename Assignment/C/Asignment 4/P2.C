#include<stdio.h>

int main(){
    char alphabets[26];
    char* p= alphabets;
    for(int i=0;i<26;i++){
        *(p+i)='A'+i;
    }
    printf("The alphabets are : \n");
    for(int i=0; i<26;i++){
        printf("%c\n",*(p+i));
    }
    return 0;

}

