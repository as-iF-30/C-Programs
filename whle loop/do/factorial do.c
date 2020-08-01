#include<stdio.h>
#include<conio.h>
int main()
{
    int a,f=1,i=1;
    printf("enter the number ");
    scanf("%d",&a);
    do
    {
        f=f*i;
        i++;
    }
    while(i<=a);
    printf("factorial of given number is%d\t",f);
    getch();
}
