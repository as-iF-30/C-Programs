#include<stdio.h>
main()
{
	int i,j,a[i][j];
	printf("Array is a 3x3 matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter values for matrix for %d %d:",i,j);
		scanf("%d",a[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[j][i]);
		}
	}
}
