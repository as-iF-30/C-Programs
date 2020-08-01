#include<stdio.h>
main()
{
	int i,d;
	printf("Enter the value of purchase:");
	scanf("%d",&i);
	
	if(i>500&&i<1000)
	{
	d=i/100*(5);
	printf("Discount is %d",d);
	}
	else
	if(i>1000&&i<5000)
	{
	d=i/100*(10);
	printf("Discount is %d",d);
    }
	else
	if(i>5000&&i<10000)
	{
	d=i/100*(20);
	printf("Discount is %d",d);
    }
	else
	if(i>20000&&i<50000)
	{
	d=i/100*(25);
	printf("Discount is %d",d);
	}
	else
	if(i>50000)
	{
	d=i/100*(30);
	printf("Discount is %d",d);
    }
	else
	printf("No discount");
    
}
