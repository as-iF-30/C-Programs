#include<stdio.h>
#include<conio.h>
main()
{
	int d,n=12563840,sum=0;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		if(d%2==0)
		{
			sum=sum+d;
		}
	}
	printf("%d",sum);
	getch();
}
