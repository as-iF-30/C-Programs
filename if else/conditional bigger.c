#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter two number a and b");
    scanf("%d\n%d",&a,&b);
    (a>b)?printf("a is bigger"):
    (b>a)?printf("b is bigger"):
        printf("a=b");
getch();
}
