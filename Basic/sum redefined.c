#include<stdio.h>
main()
{
	int x,i,ar[i],sum,avg;
	printf("Enter number of elements:");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("Enter value for array:");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<x;i++)
	{
		sum=sum+ar[i];
		avg=sum/x;
		
	}
	printf("\nSum is %d",sum);
	    printf("\nAverage is %d",avg);
}
