#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);

for(i=1; i<=N; i++)
    {
        for(j=N; j>=i; j--)
        {
            printf("c");
        }
        for(j=1; j<=(i*2-1); j++)
        {
            printf("*");
        }
        for(j=i+1; j<=N; j++)
        {
            printf("c");
        }

        printf("\n");
    }
}
