#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[30],ele,num,i;

	printf("\nenter the no of elements");
	scanf("%d",&num);

	printf("\nenter the values :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	//read the element to be searched
	printf("\nenter the elements to be searched :");
	scanf("%d",&ele);

	//search start from the zeroth location
	i=0;
	while(i<num && ele !=arr[i])
	{
		i++;
	}

	//if i<num then match found
	if(i<num)
	{
		printf("number found at the location = %d",i+1);
	}
	else
	{
		printf("number not found");
	}

	getch();
}
