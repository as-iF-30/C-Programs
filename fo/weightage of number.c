#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("enter the number a\n");
    scanf("%d",&a);
    b=a%1000; a=a-b; f=a/1000;
    c=b%100;  b=b-c; g=b/100;
    d=c%10;   c=c-d; h=c/10;
    e=d%1;    d=d-e; i=d/1;
    printf("last digit=%i\t having weightage:%d\n",i,d);
    printf("last digit=%i\t having weightage:%d\n",h,c);
    printf("last digit=%i\t having weightage:%d\n",g,b);
    printf("last digit=%i\t having weightage:%d\n",f,a);
    getch();
}
