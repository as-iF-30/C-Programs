#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,i,n;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number of dihits in mumber");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("%d",c);
}

