#include<stdio.h>
#include<conio.h>
main()
{
    int i,d,num,sum=0;
	while(num!=0)
	{
		d=num%10;
		sum=sum+d;
        num=num/10;
        i++;
	}
		printf("%d",sum);
	getch();
}
