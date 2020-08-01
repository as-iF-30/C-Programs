#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c,p,q,d;
	printf("Quadratic equation is ax^2 + bx + c=0\n");
	printf("a is coefficient of x^2 and b is coefficient of x and c is constant\n");
	printf("\na=");
	scanf("%f",&a);
	printf("\nb=");
	scanf("%f",&b);
	printf("\nc=");
	scanf("%f",&c);
	
	p=((+sqrt(b*b-4*a*c)-b)/2*a);
	q=((-sqrt(b*b-4*a*c)-b)/2*a);
	d=(b*b-4*a*c);
	if(d>0)
	{if(d=0)
	printf("Roots are equal and they are %f and %d",p,q);
	
	else
	printf("%f and %f are the root of the quadratic equation",p,q);
	}
	else
	printf("Roots are Imaginary");
	

}
