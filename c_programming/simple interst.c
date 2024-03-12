#include <stdio.h>
int main()
{
	float p,r,t;
	printf("enter the principle \n");
	scanf("%f",&p);
	printf("enter the rate of interst \n");
	scanf("%f",&r);
	printf("enter the time period \n ");
	scanf("%f",&t);
	
	printf("simple interst is : %f", (p*r*t)/100);
	
	
}
