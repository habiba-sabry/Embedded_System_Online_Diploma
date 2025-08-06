#include <stdio.h>
#include <stdlib.h>

int main() {
	float x;
	printf("Enter a number: ");
	scanf("%f", &x);
	if(x ==0){
		printf("You entered zero.\n");
	}
	else if(x >= 0){
		printf("%.2f is positive.\n" , x);
	}
	else {
		printf("%.2f is negative.\n" , x);
	}
	return 0;
}
