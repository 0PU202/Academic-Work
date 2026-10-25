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
	
	tO = sCr1 + sCr2 + sCr3;
	printf("\nAverage: %.2f", aVg = tO/3);
	
	if (aVg >= 90){
		printf("\nRemark: Excellent");}
	else if (aVg >= 80){
	printf("\nRemark: Very Good");}
	else if (aVg >= 70){
		printf("\nRemark: Good");}
	else if (aVg >= 60){
		printf("\nRemark: Needs Improvement");}
	else if (aVg >= 1){
		printf("\nRemark: Failed you dum dum :P");}
	else{
		printf("\nInvalid Input");}

return 0;
}