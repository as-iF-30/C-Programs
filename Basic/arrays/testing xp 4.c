#include<stdio.h>
main()
{
	double i=0,a[3],b[3],c[3];
	printf("All the arrays have 3 values\n");
	//For first Array
	for(i=0;i<3;i++)
	{
		printf("Enter values for first array\n");
		scanf("%lf",&a[i]);
	}
	//For second Array
	for(i=0;i<3;i++)
	{
		printf("Enter values for second array\n");
		scanf("%lf",&b[i]);
	}
	for(i=0;i<3;i++)
	{
	
	c[i]=(a[i]+b[i])/2;
	printf("The average of %lf and %lf is %lf\n",a[i],b[i],c[i]);
    }
	
}
