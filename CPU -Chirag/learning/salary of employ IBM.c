#include<stdio.h>
main()
{
	int x,Salary;
	printf("Enter the number of incentives of unit sold by Employ\n");
	scanf("%d",&x);
	if(x<10)
	{
	Salary=1000*x;
	printf("Salary of the employ is %d",Salary);
	}
	else
	printf("Salary of the employ is 10000 Rupees");
}
