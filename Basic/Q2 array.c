#include<stdio.h>
main()
{
	int x,i,ar[i];
	printf("Enter number of elements:");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("Enter value for array:");
		scanf("%d",&ar[i]);
		
	}
	for(i=0;i<x;i++)
	{
		if(ar[0]>ar[i])
		{
			printf("%d is the greatest number\n",ar[0]);
		}
		else
		printf("%d is the shortest number\n",ar[0]);
	}
	
}
