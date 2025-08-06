#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, factorial =1;
	printf("Enter an integer: ");
	scanf("%d", &x);
	if(x <0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if(x == 0){
		printf("Factorial = 1\n");
	}
	else{
		int i=1;
		for(; i<= x; i++){
			factorial *= i;
		}
		printf("Factorial = %d\n", factorial);
	}
	return 0;
}
