#include<stdio.h>
int main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("f3.txt","w");
    if(fp=NULL)
    {
        printf("nothing");
    }
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    fprintf(fp,"sum of%dand%dis%d",a,b,c);
    fclose(fp);
}
