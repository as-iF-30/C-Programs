#include<stdio.h>
int main()
{
    int a[80],n,i;
    printf("enter total number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("put element %d",i+1);
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++);
    {
       if(a[0]<a[1])
       {
           a[0]=a[1];
       }
    }
    printf("max is%d",a[0]);
}
