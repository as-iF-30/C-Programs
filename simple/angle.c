#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float pi=3.14159,a,b,c,d,e;
printf("enter the angle a");
scanf("%f",&a);
b=(a*pi)/180;
c=sin(b);
d=cos(b);
e=tan(b);
printf("sin(%f)=%f\n",b,c);
printf("cos(%f)=%f\n",b,d);
printf("tan(%f)=%f\n",b,e);
getch();
}
