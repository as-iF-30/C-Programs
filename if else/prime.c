#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,c=0,j;
    printf("enter a number");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("it is prime no");
    }
    else
    {
        printf("it is not a prime no");
    }
    getch();
}
