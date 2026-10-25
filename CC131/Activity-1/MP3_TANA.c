#include <stdio.h>

int main(void)
{
	float radius, area;
	
	printf("Input the radius to determine an area of a circle: ");
	scanf("%f", &radius);
	
	area = (3.1416)*(radius*radius);
	
	printf("The area of a circle is: %.2f", area);
	
return 0;
}
