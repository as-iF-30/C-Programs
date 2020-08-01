#include<stdio.h>
main()
{
	
    int ar[9],i;
    
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
    printf("\nEnter sixth value for array: ");
    scanf("%d",&ar[5]);
    printf("\nEnter seventh value for array: ");
    scanf("%d",&ar[6]);
    printf("\nEnter eight value for array: ");
    scanf("%d",&ar[7]);
    printf("\nEnter ninth value for array: ");
    scanf("%d",&ar[8]);
    printf("\nEnter tenth value for array: ");
    scanf("%d",&ar[9]);
    
    for(i=9;i>=0;i--)
    {
    	printf("%d\t",ar[i]);
	}
	
}
