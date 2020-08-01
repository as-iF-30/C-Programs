#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[30],num,i,loc;
	printf("\nenter no of elements :");
	scanf("%d",&num);
	printf("\nenter %d elements :",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n location of the element to be deleted :");
	scanf("%d",&loc);
	while(loc<num)
	{
		arr[loc-1]=arr[loc];
		loc++;
	}
	num--;
	for(i=0;i<num;i++)
	printf("\n %d",arr[i]);
	getch();
}
