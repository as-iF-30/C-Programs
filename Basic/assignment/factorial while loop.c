#include<stdio.h>
main()
{
	int a,f=1,i=1;
	printf("Enter the number:");
	scanf("%d",&a);
	while(i<=a)
	{
		f=f*i;
		i++;
	}
	printf("Factorial of the given number is %d",f);
}
