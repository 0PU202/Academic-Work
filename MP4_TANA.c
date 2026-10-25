#include <stdio.h>

int main (void)
{
	float pEso, dOllar;
	
	printf("Enter the amount in United States Dollars (USD) to be converted into Philippine Peso (PHP): ");
	scanf("%f", &dOllar);
	
	pEso = (dOllar * 57.50);
	
	printf("Your currency of USD %.2f is converted to %.2f Peso", dOllar, pEso);
	
return 0;
}