#include<stdio.h>
#include<conio.h>
main()
{
	int i,num=2;
	printf("enter the num");
	scanf("%d",&num);
	for(i=10;i>=1;i--)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
	getch();
}
