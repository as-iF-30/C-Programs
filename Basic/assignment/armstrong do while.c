#include<stdio.h>
main()
{
	int num,r,sum=0,i,c;
	printf("Enter a number");
	scanf("%d",&num);
	i=num;
	do
	{
		r=num%10;
		c=r*r*r;
		sum=sum+c;
		num=num/10;
	}
	while(num>0);
	if(sum==i)
	{
		printf("Entered number is an Armstrong number");
	}
	else
	printf("Entered number is not an Armstrong number");
}
