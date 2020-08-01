#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,a=0,b=1,c=0;
	printf("enter the n");
	scanf("%d",&n);
	while(i<=n)
	{
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
        i++;
	}
	getch();
}
