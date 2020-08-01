#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a[100],i,j,n,sum=0;
    printf("enter nuber of elements");
    scanf("%d",&n);
    printf("enter the number");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    for(i=1;i<=n;i++)
   {
    printf("a[%d]=%d\n",i,a[i]);
   }
   printf("sum is:%d",sum);
    getch();
}
