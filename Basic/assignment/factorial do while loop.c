#include<stdio.h>
main()
{
	int a,f=1,i=1;
	printf("Enter the number:");
	scanf("%d",&a);
	do
	{
		f=f*i;
		i++;
	}
	while(i<=a);
	printf("Factorial of given number is %d",f);
}
