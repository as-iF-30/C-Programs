#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("f1.txt","r");
    fp2=fopen("f5.txt","w");
    while(c=!feof(fp1))
    {
        c=fgetc(fp1);
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}
