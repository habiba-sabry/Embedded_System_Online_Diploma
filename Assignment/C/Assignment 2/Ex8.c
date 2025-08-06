#include <stdio.h>

int main() {
	float x,y;
	char a;
	printf("Enter operator either + or - or * or divide: ");
	scanf(" %c", &a);
	printf("Enter two operands: \n");
	scanf("%f %f", &x , &y);
	switch(a){
	    case '-':
	        printf("%.1f %c %.1f = %.1f\n", x,a,y,x-y);
	        break;
        case '+':
	        printf("%.1f %c %.1f = %.1f\n", x,a,y,x+y);
	        break;
        case '*':
	        printf("%.1f %c %.1f = %.1f\n", x,a,y,x*y);
	        break;
        case '/':
	        printf("%.1f %c %.1f = %.1f\n", x,a,y,x/y);
	        break;
        default:
	        printf("Error! operator is not correct");
	        break;
    }
	return 0;
}                                                                                    // division is not allow if 2nd no. is zero                                                                 // division is not allow if 2nd no. is zero
