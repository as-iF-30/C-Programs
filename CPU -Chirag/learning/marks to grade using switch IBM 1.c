#include<stdio.h>
main()
{
	int x,a;
	printf("Enter your marks out of 100\n");
	scanf("%d",&x);
	
	printf("Press 1 if your marks are above 90\nPress 2 if your marks are above 80\nPress 3 if your marks are above 70\nPress 4 if your marks are less than 70\n");
	scanf("%d",&a);
	
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
