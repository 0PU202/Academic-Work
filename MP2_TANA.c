#include <stdio.h>

int main(void)
{
	float celsius, fahrenheit;
	
	printf("Enter the Farenheit degree so it can be converted to Celsius: ");
	scanf("%f", &fahrenheit);
	
	celsius = ((5.0/9.0) * (fahrenheit - 32.0));
	
	printf("The entered temperature of %.1f is %.2f in Celsius", fahrenheit, celsius);
	
return 0;
}