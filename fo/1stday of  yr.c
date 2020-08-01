#include<stdio.h>
#include<conio.h>
int main()
{
   int l,f,yr,n,td; //yr=year,l=leap days,f=first day,t=total days,td=total days,normal days
   printf("enter the year");
   scanf("%d",&yr);
   n=(yr-1)*365;
   l=(yr-1)/4-(yr-1)/100+(yr-1)/400;
   td=n+l;
   f=td%7;
if(f==0)
    printf("/monday");
if(f==1)
    printf("/tuesday");
if(f==2)
    printf("/wednesday");
if(f==3)
    printf("/thursday");
if(f==4)
    printf("/friday");
if(f==5)
    printf("/satday");
if(f==6)
    printf("/sunday");
}
