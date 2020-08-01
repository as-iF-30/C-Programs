#include<stdio.h>
#include<conio.h>
int main()
{
    int acc;
    printf("enter a acc");
    scanf("%d",&acc);
    switch(acc)
    {
    case 1:
        printf("NAME-ASIF\n");
        printf("balance=3400");
        break;
        case 2:
        printf("NAME-Ajay\n");
        printf("balance=5000");
        break;
        case 3:
        printf("NAME-Aman\n");
        printf("balance=3800");
        break;
        case 4:
        printf("NAME-Anith\n");
        printf("balance=6000");
        break;
        default:
        printf("enter no bw 1-4");
        break;
    }
    getch();
}
