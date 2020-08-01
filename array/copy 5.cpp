#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[30],arr2[30],i,num;
	
	printf("\nenter no of element");
	scanf("%d",&num);
	
	//accepting values into array
	printf("\nenter the values :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	/*copying data from array 'a' to array 'b'*/
	for(i=0;i<num;i++)
	{
	arr2[i]=arr[i];
	}
	//printing of all elements of array
	printf("the copied array is :");
	for(i=0;i<num;i++)
	printf("\n arr2[%d]=%d",i,arr2[i]);
	
	getch();
}

