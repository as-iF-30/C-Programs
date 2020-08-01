#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[30],element,num,i,location;
	printf("enter no of elements to be inserted :");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n enter the elemet to be inserted :");
	scanf("%d",&element);

	printf("\nenter the location");
	scanf("%d",&location);
	for(i=num;i>=location;i--)
	{
		arr[i]=arr[i-1];
	}

	num++;
	arr[location-1]=element;
	for(i=0;i<num;i++)
	printf("\n %d",arr[i]);
	getch();
}
