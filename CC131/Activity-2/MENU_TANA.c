#include <stdio.h>

int main (void)
{
	float sCr1, sCr2, sCr3, tO, aVg;
	int nUm1, nUm2, aN;
	char Menu, oPer;
	
	printf("\nMENU PROGRAMS\n");
	printf("\n[A]- Average [B]- MDAS [C]- My Profile");
	printf("\n\nSelection: ");
	scanf(" %c", &Menu);
	
	switch (Menu)
	{
		//AVERAGE
		case 'A': case 'a':
			printf("\n--------------------------------");
			printf("\nPROGRAM A: AVERAGE\n");
			printf("\nCaclculate the 3 scores and compute its Total and Average");
			
			printf("\n\nFirst Score: ");
			scanf("%f", &sCr1);
		
			printf("Second Score: ");
			scanf("%f", &sCr2);
		
			printf("Third Score: ");
			scanf("%f", &sCr3);
			
			printf("\n\nTotal: %.2f", tO = sCr1 + sCr2 + sCr3);
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
			break;
			
		//MDAS
		case 'B': case 'b':	
			printf("\n--------------------------------");
			printf("\nPROGRAM B: MDAS\n");
			printf("\nInput the 2 numbers and an Operator\n");
			
			printf("\nFirst Number: ");
			scanf("%d", &nUm1);
			
			printf("Second Number: ");
			scanf("%d", &nUm2);
			
			printf("Operator (+, -, /, *): ");
			scanf(" %c", &oPer);
			
			if (oPer == '+'){
				printf("\nThe sum of %d and %d is: %d", nUm1, nUm2, aN = nUm1 + nUm2);}
			else if (oPer == '-'){
				printf("\nThe difference of %d and %d is: %d", nUm1, nUm2, aN = nUm1 - nUm2);}
			else if (oPer == '/'){
				printf("\nThe quotient of %d and %d is: %d", nUm1, nUm2, aN = nUm1 / nUm2);}
			else if (oPer == '*'){
				printf("\nThe product of %d and %d is: %d", nUm1, nUm2, aN = nUm1 * nUm2);}
			else{
				printf("\nInvalid input");};
			break;
		
		//MY PROFILE
		case 'C': case 'c':
			printf("\n--------------------------------");
			printf("\nPROGRAM C: MY PROFILE\n");
			printf("\nFull Name: Mark Daniel C. Tana");
			printf("\nSection: BSCS-1A-M");
			printf("\nCourse: Bachelor of Science in Computer Science");
			break;
		
		//DEFAULT
		default:
			printf("\nNo Program, [%c] is assigned to that Selection!", Menu);
	}	
	
return 0;
}