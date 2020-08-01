#include<stdio.h>
int main()
{
    int i=1,j,n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
         if(n%i==0)
         {
             c++;
         }
         i++;
    }
    if(c==2)
         {
            printf("prime");
         }
    else
    {
        printf("not prime");
    }

    }

