#include<stdio.h>
#include<conio.h>
int main()
{
    int n,b=0,a,i;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        b=b+a;
        n=n/10;
    }
        printf("the number is%d",b);
}
