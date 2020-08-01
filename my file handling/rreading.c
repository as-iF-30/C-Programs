//reading the existing file
#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("nothing");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);

}
