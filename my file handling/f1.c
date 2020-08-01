//creating and writing in new file
#include<stdio.h>
int main()
{
    FILE *fp;
    char a[60];
    int i;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("not");
        exit(1);
    }
    printf("enter something\n");
    gets(a);
    for(i=0;i!=strlen(a);i++)
    {
        fputc(a[i],fp);
    }
    fclose(fp);
}
