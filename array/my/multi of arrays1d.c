#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a[50],i,j,n,multi=1;
    printf("enter nuber of elements");
    scanf("%d",&n);
    printf("enter the number");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        multi=multi*a[i];
    }
    for(i=1;i<=n;i++)
   {
    printf("a[%d]=%d\n",i,a[i]);
   }
   printf("multi is:%d",multi);
    getch();
}
