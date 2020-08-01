#include<stdio.h>
#include<conio.h>
int add(int, int);
int sub(int, int);
int multi(int, int);
int div(int, int);
int rem(int, int);
int and(int, int);
int or(int, int);
int xor(int, int);
int calculator()
{
    int a,b,n,c;
    printf("enter two numbers");
    scanf("%d\n%d",&a,&b);
    printf("***enter your choise***\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multi\n");
    printf("press 4 for division\n");
    printf("press 5 for modulus\n");
    printf("press 6 for bitwise or\n");
    printf("press 7 for bitwise and\n");
    printf("press 8 for bitwise x or\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        c=add(a,b);
        break;
    case 2:
        c=sub(a,b);
        break;
    case 3:
        c=multi(a,b);
        break;
    case 4:
        c=div(a,b);
        break;
    case 5:
        c=rem(a,b);
        break;
    case 6:
        c=and(a,b);
        break;
    case 7:
        c=or(a,b);
        break;
    case 8:
        c=xor(a,b);
        break;
    default:
        printf("choose between 1-8");
    }
    printf("%d",c);

}
int add(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
int sub(int x,int y)
{
    int c;
    c=x-y;
    return c;
}
int multi(int x,int y)
{
    int c;
    c=x*y;
    return c;
}
int div(int x,int y)
{
    int c;
    c=x/y;
    return c;
}
int rem(int x,int y)
{
    int c;
    c=x%y;
    return c;
}
int and(int x,int y)
{
    int c;
    c=x&y;
    return c;
}
int or(int x,int y)
{
    int c;
    c=x|y;
    return c;
}
int xor(int x,int y)
{
    int c;
    c=x^y;
    return c;
}
int main()
{
    int t;
    calculator();
    printf("\n*****do you want to continue****\npress:\n1 for yes\n2 for no\n");
    scanf("%d",&t);
    if(t==1)
    {
        main();
    }
    else if(t==2)
    {
        printf("thank u");
    }
    else
    {
        printf("sorry wrong output");
        main();
    }
getch();
}
