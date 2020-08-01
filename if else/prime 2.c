#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,n,d=0;
    printf("enter a no");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            d=1;
        }
    }
    if(d==0)
    {
        printf("it is prime no");
    }
    else
    {
        printf("it is not prime");
    }
    getch();
}
