#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	printf("Enter a integer:");
	fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d\n",x);
	return 0;
}
