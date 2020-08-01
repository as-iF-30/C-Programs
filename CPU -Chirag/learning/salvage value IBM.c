#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter Depreciation :");
	scanf("%d",&a);
	printf("\nEnter Purchase Price:");
	scanf("%d",&b);
	printf("\nEnter Years of Service");
	scanf("%d",&d);
	c=b-(a*d);
	printf("Salvage Value is :%d",c);
	
}
