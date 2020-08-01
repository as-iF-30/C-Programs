#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,pi=3.14,x;
	printf("Enter value of theta angle");
	scanf("%f",&x);
	
	a=sin(x*pi/180);
	b=cos(x*pi/180);
	c=tan(x*pi/180);
	printf("sin of %f is %f\n",x,a);
	printf("cos of %f is %f\n",x,b);
	printf("tan of %f is %f\n",x,c);
	
	
}
