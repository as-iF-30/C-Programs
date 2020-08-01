#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c=0,lcm,i;
    printf("enter two positive integer a,b");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;++i)
    {
        if(a%i==0&&b%i==0)
            c=i;
    }
    lcm=(a*b)/c;
    printf("%d\n",lcm);
    printf("%d",c);
    getch();
}
