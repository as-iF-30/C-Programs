#include<stdio.h>
int main()
{
    int i,j,k,n;0
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            k=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    k=0;
                }
            }
         if(k==1)
         {
             printf("%d",i);
         }
        }
    }
}
