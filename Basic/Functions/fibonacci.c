#include<stdio.h>
main()
{
	getvalue();
	algorithm();
}
getvalue()
{
	int x,a=0,b=1;
	printf("Enter number:");
	scanf("%d",&x);
	printf("\n%d %d",a,b);
}
algorithm()
{
	int a=0,b=1,c,i,x;
	for(i=2;i<x;++i)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
