#include <stdio.h>

int main (void)
{
	float inteme, centeme;
	
	printf("Input the measured Inches to be converted into Centimeters: ");
	scanf("%f", &inteme);
	
	centeme = (inteme*2.54);
	
	printf("Your entered measurements of %.2f inches is equivalent to %.2f centimeters.", inteme, centeme);
	
return 0;
}
