#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: \n");
	scanf("%f", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %.2f\n", a);
	printf("After swapping, value of b = %.2f\n", b);
	return 0;
}
