//reading the existing file with array type
#include<stdio.h>
int main()
{
    char ch[100];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("nothing");
        exit(1);
    }
    while(fgets(ch,2,fp)!=NULL)
    {
        printf("%s",ch);
    }
    fclose(fp);

}
