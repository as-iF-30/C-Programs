#include<stdio.h>
main()
{
	int i,j,a[3][3];
	printf("Array is a 3x3 matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter values for matrix for %d %d:",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	printf("Matrix given by you is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
			
		}
		printf("\n");
	}
}
