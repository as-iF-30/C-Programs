#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the value of a");
    scanf("%d",&a);
    b=a++;
    c=++a;
    d=a--;
    e=--a;
    printf("a++=%d\n",b);
    printf("++a=%d\n",c);
    printf("a--=%d\n",d);
    printf("--a=%d\n",e);
    getch();
}
