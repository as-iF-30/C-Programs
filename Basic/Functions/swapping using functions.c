#include<stdio.h>
main()
{
	getvalues();
	swapping();
}
getvalues()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Before Swapping a=%d and b=%d\n",a,b);
}
swapping()
{
	int a,b;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping a=%d and b=%d",a,b);
	
}
