#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	printf("\npress 1 for monday");
	printf("\npress 2 for tuesday");
	printf("\npress 3 for wednesday");
	printf("\npress 4 for thursday");
	printf("\npress 5 for friday");
	printf("\npress 6 for saturday");
	printf("\npress 7 for sunday");
	printf("\n\t\t*****\t*****");
	printf("\nplease enter your choice :");
	scanf("%d",&day);
	switch (day)
	{
		case 1:
			printf("monday");
			break;
		case 2:
		    printf("tuesday");
		    break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
        case 7:
			printf("sunday");
			break;
		default:
			printf("please choose between 1-7");
			break;
	}
	getch();
}
