#include<stdio.h>
main()
{
	getvalues();
	perimeter();
	area();
}
getvalues()
{  
    int x;
	printf("Enter radius of the circle:");
	scanf("%d",*&x);
}
perimeter()
{
	int c,x;
	c=2*3.14*x;
	printf("\nPerimeter is %d",c);
}
area()
{   int a,x;
	a=3.14*(x*x);
	printf("\nArea is %d",a);
}

