#include<stdio.h>
#include<conio.h>
int main()
{
    int a,f=1,i=1;
    printf("enter the number ");
    scanf("%d",&a);
    while(i<=a)
    {
        f=f*i;
        i++;
    }
    printf("factorial of given number is%d\t",f);
    getch();
}
