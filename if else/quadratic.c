#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2,imp,rp;
printf("Enter a,b,c:");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4.0*a*c;
if(d==0)
{
printf("roots are real and equal");
r1=-b/(2*a);
r2=r1;
printf("root1=%f\n",r1);
printf("root2=%f\n",r2);
}
else if(d>0)
{
printf("roots are real and unequal\n");
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
printf("root1=%f\n",r1);
printf("root2=%f\n",r2);
}
else if(d<0)
{
d=-d;
printf("roots are complex");
rp=-b/(2*a);
imp=sqrt(d)/(2*a);
printf("root1=%f+i%f",rp,imp);
printf("root2=%f-i%f",rp,imp);
}
getch();
}
