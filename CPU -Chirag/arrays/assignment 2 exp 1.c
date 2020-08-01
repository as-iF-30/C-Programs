#include<stdio.h>
main()
{
	
    int ar[4],i;
    
    printf("Enter first value for array: ");
    scanf("%d",&ar[0]);
    printf("\nEnter second value for array: ");
    scanf("%d",&ar[1]);
    printf("\nEnter third value for array: ");
    scanf("%d",&ar[2]);
    printf("\nEnter fourth value for array: ");
    scanf("%d",&ar[3]);
    printf("\nEnter fifth value for array: ");
    scanf("%d",&ar[4]);
    
    for(i=0;i<=4;i++)
    {
    	printf("%d\t",ar[i]);
    	
	}
	
}
