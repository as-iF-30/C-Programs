#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[50];
    int i;
    gets(a);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]>=65&&a[i]<=91||a[i]>=97&&a[i]<=123)
           printf("%d\n",&a[i]);
    }
}
