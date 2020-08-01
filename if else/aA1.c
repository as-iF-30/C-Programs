#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("enter your choice\n");
    scanf("%c",&a);
    if(a>=65&&a<=90)
    {
        printf("it is a capital letter %c",a);
    }
    else if(a>=97&&a<=122)
    {
        printf("it is a small letter %c",a);
    }
    else if(a>=48&&a<=57)
    {
        printf("it is a digit %c",a);
    }
   else if(a==32)
    {
        printf("white space character %c",a);
    }
   else if(a>=0&&a<=47||a>=91&&a<=96||a>=123&&a<=127)
    {
        printf("it is punctuation mark %c",a);
    }
    getch();
}
