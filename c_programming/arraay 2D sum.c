#include <stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2];
	int i,j;
	printf("enter the elements of first array \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);	
		}	
	}
	printf("enter the elements of second array \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);	
		}	
	}
	
	int arr3[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}	
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr3[i][j]);	
		}	
		printf("\n");
	}	
}
