#include<stdio.h>

void main()
{
	int i=1,n,f;
	printf("Enter a number");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Factorial of the given number is %d",f);
	
}
