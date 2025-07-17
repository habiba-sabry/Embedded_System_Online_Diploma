#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, sum =0;
	printf("Enter an integer: ");
	scanf("%d", &x);
	int i=1;
	for (;i<=x; i++){
		sum +=i;
	}
	printf("Sum = %d",sum);
	return 0;
}
