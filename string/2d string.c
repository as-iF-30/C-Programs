#include<stdio.h>
int main()
{
    char a[50][100];
    int i,n;
    printf("start\n");
    printf("enter number of lines to be enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

            gets(&a[n][0]);
    }
    for(i=0;i<n;i++)
    {
puts(a[n]);
    }
}
