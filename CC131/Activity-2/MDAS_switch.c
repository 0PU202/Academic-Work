#include <stdio.h>

int main (void)
{
	int nUm1, nUm2, aN;
	char oPer;
	
	printf("Input the 2 numbers and an Operator\n");
	
	printf("\nFirst Number: ");
	scanf("%d", &nUm1);
	
	printf("Second Number: ");
	scanf("%d", &nUm2);
	
	printf("Operator (+, -, /, *): ");
	scanf(" %c", &oPer);
	
	switch (oPer)
	{
		case '+':
			printf("\nThe sum of %d and %d is: %d", nUm1, nUm2, aN = nUm1 + nUm2);
			break;
		case '-':
			printf("\nThe difference of %d and %d is: %d", nUm1, nUm2, aN = nUm1 - nUm2);
			break;
		case '/':
			printf("\nThe quotient of %d and %d is: %d", nUm1, nUm2, aN = nUm1 / nUm2);
			break;
		case '*':
			printf("\nThe product of %d and %d is: %d", nUm1, nUm2, aN = nUm1 * nUm2);
			break;
		default:
			printf("\nInvalid input");
	}	
return 0;
}