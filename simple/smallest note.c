#include<stdio.h>
#include<conio.h>
int main()
{
    int a,h,f,t,p,d,o,to;
    printf("enter the a");
    scanf("%d",&a);
    h=a/100;
    a=a%100;
    f=a/50;
    a=a%50;
    t=a/10;
    a=a%10;
    p=a/5;
    a=a%5;
    d=a/2;
    a=a%2;
    o=a/1;
    a=a%1;
    to=h+f+t+p+d+o+p;
    printf("small=%d\n",to);
}
