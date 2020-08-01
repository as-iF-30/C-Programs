//use of fread
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
    fp=fopen("f2.txt","rb");
    if(fp==NULL)
    {
        printf("nothing to show");
    }
    struct book c;
    fread(&c,sizeof(c),1,fp);
    printf("%d %s %f",c.a,c.b,c.p);
    fclose(fp);
}
