#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf("c");
        }
        for(j=1;j<=(i*2-1);j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
