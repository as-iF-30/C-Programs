#include<stdio.h>
main()
{
	displayandcondition();
	greater();
}
displayandcondition()
{
	int a,b;
	printf("Enter value for a:");
	scanf("%d",&a);
	printf("Enter value for b:");
	scanf("%d",&b);
	
	if(a>b)
	return a;
	else
	return b;
}

greater()
{
	int a,b;
	printf("%d is greater");
}
