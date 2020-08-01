#include<stdio.h>
#include<conio.h>
main()
{
    int i,a,b,c,d,choice;
    printf("do you want to allow table\n");
    printf("\n 1:yes");
    printf("\n 2:no");
    printf("\n enter your choice =");
    scanf("%d",&choice);
    if("yes")
	for(i=1;i<=10;i++)
	{
    a=2;
    b=3;
    printf("%d\n%d\n",a*i,b*i);
	}
	else
	if("no");
	{
		printf("***thankyou***\n");
	}
	printf("do you want to allow reverse table\n");
    printf("\n 1:yes");
    printf("\n 2:no");
    printf("\n enter your choice =\n");
    scanf("%d",&choice);
	if("yes")
	for(i=10;i>=1;i--)
	{
    c=3;
    d=2;
    printf("%d\n%d\n",a*i,b*i);
	}
 else
	if("no")
	{
		printf("***thankyou***");
	}
	getch();
}
