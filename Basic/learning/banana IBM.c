#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Price of 1kg Apples is 100Rs.\n");
	printf("Enter the amount of apples bought in kg\n");
	scanf("%d",&a);
	printf("Enter the amount of banana bought in dozens\n");
	scanf("%d",&b);
	printf("Enter the total bill\n");
	scanf("%d",&c);
	d=(c-(a*100))/b;
	printf("\nPrice of 1 Dozen banana is %d",d);
	
}
