#include<stdio.h>
main()
{
	int i,a,discount;
	printf("Enter the value of purchase:");
	scanf("%d",&i);
	
	if(i>500&&i<1000)
	{
	printf("Value of purchase is greater than 500\n");
	printf("Enter 1 to confirm\n");
	scanf("%d",&a);
	}
	else 
	if(i>1000&&i<5000)
	{
	printf("Value of purchase is greater than 1000\n");
	printf("Enter 2 to confirm\n");
	scanf("%d",&a);
	}
	else 
	if(i>5000&&i<20000)
	{
	printf("Value of purchase is greater than 5000\n");
	printf("Enter 3 to confirm\n");
	scanf("%d",&a);
	}
	else 
	if(i>20000&&i<50000)
	{
	printf("Value of purchase is greater than 20000\n");
	printf("Enter 4 to confirm\n");
	scanf("%d",&a);
	}
	else
	{
	printf("Value of purchase is greater than 50000\n");
	printf("Enter 5 to confirm\n");
	scanf("%d",&a);
	}
	switch(a)
	{
		case 1:
		{
		discount=(i/100*(5));
		printf("Discount is %d",discount);
		}
		case 2:
		{
		discount=(i/100*(10));
		printf("Discount is %d",discount);
		}
		case 3:
		{
		discount=(i/100*(20));
		printf("Discount is %d",discount);
		}
		case 4:
		{
		discount=(i/100*(25));
		printf("Discount is %d",discount);
		}
		case 5:
		{
		discount=(i/100*(30));
		printf("Discount is %d",discount);
		}
		
	}
}
