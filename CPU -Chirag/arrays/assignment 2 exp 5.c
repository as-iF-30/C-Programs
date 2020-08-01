#include<stdio.h>
main()
{
	int a[2];
	printf("Enter first element for array:");
	scanf("%d",&a[0]);
	printf("Enter second element for array:");
	scanf("%d",&a[1]);
	printf("Enter third element for array:");
	scanf("%d",&a[2]);
	
	if(a[0]>a[1])
	{
		if(a[0]>a[2])
		printf("%d is the largest array element",a[0]);
		else
		printf("%d is the largest array element",a[2]);
	}
	else
	{
	if(a[1]>a[2])
	printf("%d is the largest array element",a[1]);
	else
	printf("%d is the largest array element",a[2]);
}
}
