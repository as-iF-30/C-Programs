#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    gets(s1);
    fflush(stdin);
    gets(s2);
    puts(strupr(s1));
    puts(strlwr(s1));
    puts(strrev(s1));
    printf("%d",strlen(s1));
    if(strcmp(s2)==0)
}
