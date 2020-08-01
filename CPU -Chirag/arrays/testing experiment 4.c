#include<stdio.h>
main()
{
	int i=0,a[3],b[3],c[3];
	printf("All the arrays have 3 values\n");
	//For first Array
	for(i=0;i<3;i++)
	{
		printf("Enter values for first array\n");
		scanf("%d",&a[i]);
	}
	    printf("Your input array is:");
	    printf("%d\t",&a[i]);
	//For second Array
	for(i=0;i<3;i++)
	{
		printf("Enter values for second array\n");
		scanf("%d",&b[i]);
	}
	    printf("Your input array is:");
	    printf("%d\t",&b[i]);
	
	
	c[i]=(a[i]+b[i])/2;
	for(i=0;i<3;i++)
	{
		printf("%d\t",&c[i]);
	
    }
	
}
