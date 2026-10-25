#include <stdio.h>

int main (void)
{
	float sCr1, sCr2, sCr3, tO, aVg;
	
	printf("Caclculate the 3 scores and compute its Total and Average");
	
	printf("\n\nFirst Score: ");
	scanf("%f", &sCr1);
	
	printf("Second Score: ");
	scanf("%f", &sCr2);
	
	printf("Third Score: ");
	scanf("%f", &sCr3);
	
	printf("\n\nTotal: %.2f", tO = sCr1 + sCr2 + sCr3);
	printf("\nAverage: %.2f", aVg = tO/3);
	
	if (aVg >= 75){
		printf("\nCongrats, you passed!!!");}
	else{
		printf("\nSorry, you failed!!! dum dum :P");}
	
return 0;
}