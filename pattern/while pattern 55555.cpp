#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,j;
    	while(i<=5)
	{
		j=1;
		while(j<=i)
	{
		printf("%d",i);
		j++;
	}
		printf("\n");
		i++;
	}
	getch();
}
