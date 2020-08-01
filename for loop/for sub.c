#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        a--;
    }
    printf("%d",a);
    getch();
}

