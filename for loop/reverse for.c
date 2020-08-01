#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,i,d;
    printf("enter the number");
    scanf("%d",&a);
    printf("define the digits in number");
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("%d",b);
}
