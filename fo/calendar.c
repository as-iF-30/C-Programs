#include<stdio.h>
int main()
{
    int a,b,c,d,f;
    long int e;
    printf("enter a valid date in dd-mm-yyyy formart:");
    scanf("%d%d%d",&a,&b,&c);
    for(d=1,e=(365*(c-1))+(a-1)+((c/4)-(c/100)+(c/400));d<b;d++)
    e+=(d==2)?(28):((d==4||d==6||d==9||d==11)?(30):(31));
    f=e%7;
    {
        if(f==0)
            printf("\n monday\n");
        if(f==1)
            printf("\n tuesday\n");
        if(f==2)
            printf("\n wednesday\n");
        if(f==3)
            printf("\n thursday\n");
        if(f==4)
            printf("\n friday\n");
        if(f==5)
            printf("\n saturday\n");
        if(f==6)
            printf("\n sunay\n");
    }
}
