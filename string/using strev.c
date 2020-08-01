#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s;
    printf("Enter the string:");
    gets(&s);
    printf("Reverse string:");
    puts(strrev(&s));
    getch();

}
