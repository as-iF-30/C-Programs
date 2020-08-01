#include<stdio.h>
#include<conio.h>
main()
{
	int num,r,sum=0,i,c;
	printf("enter the num");
	scanf("%d",&num);
	i=num;
	do
	{
        r=num%10;
		c=r*r*r;
		sum=sum+c;
		num=num/10;
	}
	while(num>0);
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
