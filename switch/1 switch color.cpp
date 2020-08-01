#include<stdio.h>
#include<conio.h>
main()
{
	int color;
	printf("\nenter your choice from these");
	printf("\npress 1 for red");
	printf("\npress 2 for pink");
	printf("\npress 3 for cyan");
	printf("\npress 4 for lime");
	printf("\npress 5 for black");
	printf("\nenter your colour :");
    scanf("%d",&color);
	switch(color)
	{
		case 1:
			printf("you had choosen red");
			break;
		case 2:
			printf("you had choosen pink");
			break;
		case 3:
			printf("you had choosen cyan");
			break;
		case 4:
			printf("you had choosen lime");
			break;
		case 5:
			printf("you had choosen black");
			break;
		default:
			printf("please choose 1-5");
	}
	getch();
}
