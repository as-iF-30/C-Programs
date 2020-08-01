#include<stdio.h>
 main()

{
	int i,j,k,m,discount,choice;
	printf("enter the value of purchase");
	scanf("%d",&i);
	printf("the choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
	    i=(500*95/100);
		printf("%d the discount of",i);
		break;
		}	
		case 2:
		{
		j=(1000*90/100);
		printf("%d the discount of",j);
		break;
		}
		
		case 3:
		{
		k=(5000*80/100);
		printf("%d the discount of",k);
		break;
		}
		
		case 4:
		{
		m=(20000*75/100);
		printf("%d the discount of",m);
		break;
	}
	defult:
	printf("their is no discount value");
			
	}
	
}
