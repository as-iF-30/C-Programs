#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a=0,b=1,c=0;
 printf("enter the n");
 scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",c);
        a=b;
		b=c;
		c=a+b;
	}
	getch();
}
