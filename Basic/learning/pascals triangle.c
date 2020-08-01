#include<stdio.h>
main()
{
	int row,col,x,n,space;
	printf("Enter number of Rows: ");
	scanf("%d",&x);
	for(row=0;row<=x;row++)
	{
		for(space=0;space<(x-row);space++)
		{
		printf(" ");
		}
		n=1;
		for(col=0;col<=row;col++)
		{
			printf(" %d",n);
			n=n*(row-col)/(col+1);
		}
			printf("\n");
	}
}
