#include<stdio.h>
main()
{
	int i=0,a[3],b[3],c[3];
	printf("All the arrays have 3 values\n");
	for(i=0;i<3;i++)
	{
		printf("Enter values for first array\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("Enter values for second array\n");
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
	
	c[i]=(a[i]+b[i])/2;
	printf("The average of %d and %d is %d\n",a[i],b[i],c[i]);
    }
	
}
