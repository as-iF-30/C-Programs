#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a[100],i,j,n;
    float avg,sum=0.0;
    printf("enter nuber of elements\n");
    scanf("%d",&n);
    printf("enter the number\n");
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
   printf("sum is:%.0f\n",sum);
   avg=sum/n;
   printf("average is:%f",avg);
    getch();
}
