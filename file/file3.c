#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char a;
    fp1 = fopen("test.txt", "r");
    if(fp1==NULL)
    {
        puts("cannot open this file");
    }
    fp2 = fopen("test.txt", "w");
    if(fp2==NULL)
    {
        puts("not able to open this file");
        fclose(fp1);
    }
    do
    {
        a = fgetc(fp1);
        fputc(a, fp2);
    }
    while(a!=EOF);
    getch();
}

