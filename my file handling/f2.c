//use of fwrite
#include<stdio.h>
struct book
{
    int a;
    char b[50];
    float p;
};
int main()
{
    FILE *fp;
    fp=fopen("f2.txt","wb");
    struct book c;
    scanf("%d",&c.a);
    fflush(stdin);
    gets(c.b);
    scanf("%f",&c.p);
    fwrite(&c,sizeof(c),1,fp);
    fclose(fp);
}
