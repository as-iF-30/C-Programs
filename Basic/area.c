#include<stdio.h>
#include<math.h>
void main()
{
	float r,c,a,d,pi=3.14;
		
	d=r+r;
	c=2*pi*r;
	a=pi*r*r;
	printf("Enter a value for radius of circle");
	scanf("%d",&r);

	printf("Diameter= %d \nArea= %d \nCircumference= %d",d,a,c);
	
}
