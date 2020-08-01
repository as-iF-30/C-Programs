#include<stdio.h>
#include<conio.h>
main()
{
	int d,n=143658297,sum=1;
	while(n>1)
	{
		d=n%10;
		n=n/10;
		if(d%2==1)
		{
			sum=sum+d;
		}
	}
	printf("%d",sum);
	getch();
}
