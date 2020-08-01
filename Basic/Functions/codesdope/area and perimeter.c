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
	scanf("%d",&x);
}
perimeter()
{
	float c,x;
	c=2*3.14*x;
    printf("\nPerimeter is %f",c);
}
area()
{   float a,x;
	a=3.14*(x*x);
	printf("\nArea is %f",a);
}

