#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter two value");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        c=a&b;
        a=a^b;
        b=c<<1;
    }
    printf("answer %d",a);
    getch();
}
