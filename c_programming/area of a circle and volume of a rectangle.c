#include <stdio.h>
int main()
{
	float r;
	printf("enter the radius of a circle \n");
	scanf("%f",&r);
	
	printf("area of a circle is :  %f \n",3.14*r*r);
	
	// volume of a cylinder base of these circle
	
	float h;
	printf("enter the height of a cylinder \n");
	scanf("%f",&h);
	
	printf("volume of a cylinder is : %f" , 3.14*r*r*h);
	
	return 0;
}
