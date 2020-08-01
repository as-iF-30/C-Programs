#include<stdio.h>

void main()
{
	int a,b,c,d;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	
	c=a>b?a:b;
	d=a<b?a:b;
	printf("Largest number is %d and smallest number is %d",c,d);
}
