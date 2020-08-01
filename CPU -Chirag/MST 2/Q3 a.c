#include<stdio.h>
main()
{
	int i=0,x,y;

	for(i=0;i<100;i++)
	{
		x=i%5;
	    y=i%7;
		if(x==0&&y==0)
		{
			printf("%d\n",i);
		}
	}
	
}
