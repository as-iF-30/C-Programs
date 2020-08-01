#include<stdio.h>
#include<conio.h>
main()
{
	int i=10,a=3,b=2,c,d;
	while(i>=1)
	{
		c=a*i;
		d=b*i;
		printf("%d\n%d\n",c,d);
		i--;
	}
	getch();
}

