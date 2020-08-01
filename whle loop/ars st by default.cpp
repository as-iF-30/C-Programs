#include<stdio.h>
#include<conio.h>
main()
{
	int num=153,r,sum=0,i,c;
	i=num;
	while(num>0)
	{
        r=num%10;
		c=r*r*r;
		sum=sum+c;
		num=num/10;
	}
	if(sum==i)
	{
	printf("is an armstrong no");
}
else
{
    printf("is not an armstrong no");
}
	getch();
}
