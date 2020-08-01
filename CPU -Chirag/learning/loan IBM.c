#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter years spent in the organization\n");
	scanf("%d",&a);
	printf("Press 1 if u have taken loan before\nor Press 2 if not\n");
	scanf("%d",&b);
	printf("\nEnter your salary\n");
	scanf("%d",&c);
	printf("\nEnter the amount of loan needed\n");
	scanf("%d",&d);
	if(a>=5)
	{if(b=2)
	{if(d<(3*c))
	printf("You are eligible for loan");
	}}
	else
	printf("Your Loan is rejected");
}
