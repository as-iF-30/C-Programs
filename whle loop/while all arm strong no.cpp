#include<stdio.h>
#include<conio.h>
main()
{
	int n,num,sum,r,c;
	for(n=1;n<=1000;n++)
	{
		num=n;
  		sum=0;
	while(num>0)
	{
        r=num%10;
        c=r*r*r;
		sum=sum+c;
		num=num/10;
	}
		if(n==sum)

		printf("%d\n",n);
	}
getch();
}
