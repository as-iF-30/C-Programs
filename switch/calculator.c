#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,sum,sub,div,mut,rem;
    char op;
    do
    {
    printf("enter the value of a=");
    scanf("\n%d",&a);
    printf("enter value of b=");
    scanf("\n%d",&b);
    printf("***what do you want to do***\n");
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for div\n");
    printf("press 4 for mut\n");
    printf("press 5 for rem\n");
    printf("enter you choice");
    scanf("\n%d",&n);
    switch(n)
    {
    case 1:
        sum=a+b;
        printf("%d",sum);
        break;
    case 2:
        sub=a-b;
        printf("%d",sub);
        break;
    case 3:
        div=a/b;
        printf("%d",div);
        break;
    case 4:
        mut=a*b;
        printf("%d",mut);
        break;
    case 5:
        rem=a%b;
        printf("%d",rem);
        break;
        default:
            printf("you have choosen wrong\nchoose between 1-5\n");
    }
    printf("\ndo you want to continue y or n\n");
    op=getch();
    }
    while(op=='y');
    getch();
}
