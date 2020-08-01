#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[50],i,n,loc;
 	int rollno;
 	char name[20];
	printf("\nenter the stud records you want to store :");
	scanf("%d",&n);

 	//read records in array
	printf("\nenter name & rollno for stud",n);
	for(i=0;i<n;i++)
	{
	printf("\n\nenter %d record",i+1);
	printf("\nenter the name :");
	scanf("%s",&arr[i]);
	printf("enter the rollno :");
	scanf("%d",&arr[i]);
	}
	//read the location
	printf("\n\t*****\t*****");
	printf("\n\nenter the location you want to delete :");
	scanf("%d",&loc);
	//loop for deletion
	while(loc<n)
	{
		arr[loc-1]=arr[loc];
		loc++;
	}
	n--;//no of elements reduced by 1

	//print array
	for(i=0;i<n;i++)
	printf("\n%d",arr[i]);
	getch();
}
