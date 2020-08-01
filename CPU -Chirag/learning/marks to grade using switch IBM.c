#include<stdio.h>
main()
{
	int x,a;
	printf("Enter your marks out of 100\n");
	scanf("%d",&x);
	
	if(x>=90)
	{
	a==1;
	printf("\nYour marks are above 90\n");
	}
	else
	if(x>=80&&x<90)
	{
	a==2;
	printf("\nYour marks are above 80\n");
	}
	else
	if(x>=70&&x<80)
	{
	a==3;
	printf("\nYour marks are above 70\n");
	}
	else
	{
	a==4;
	printf("\nYour marks are below 70\n");
    }
    
	switch(a)
	{
		case 1:
			printf("\nYour grade is A");
			break;
			
		case 2:
			printf("\nYour grade is B");
			break;
			
		case 3:
			printf("\nYour grade is C");
			break;
			
		case 4:
			printf("\nYour grade is D");
			break;
			
		default:
			printf("\nInvalid Input");
	}
	
}
