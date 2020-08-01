#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter the integer");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;}
		printf("the factorial of given no. is %d",f);
	return 0;
	}
