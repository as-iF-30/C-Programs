#include<stdio.h>
main()
{
	getvalues();
	power();
}
getvalues()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&b);
	printf("Enter the power:");
	scanf("%d",&a);
}
power()
{
	int a,b,c;
	c=pow(b,a);
	printf("%d to the power %d is %d",b,a,c);
}
