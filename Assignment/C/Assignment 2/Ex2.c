#include <stdio.h>
#include <stdlib.h>

int main() {
	char x;
	printf("Enter an alphabet: ");
	scanf("%c", &x);
	if ( x == 'a' || x=='A' || x=='e' || x=='E' || x=='o' || x=='O' || x=='u' || x=='U' || x=='I'|| x=='i'){
		printf("%c is a vowel.", x);
	}
	else{
		printf("%c is a consonant.", x);
	}
	return 0;
}
