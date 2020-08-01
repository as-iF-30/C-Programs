#include<stdio.h>
#include<conio.h>
main()
{
    int i=0,num=1562;
	while(num>0)
	{
		i++;
		num=num/10;
	}
		printf("%d",i);
	getch();
}
