#include<stdio.h>
int main()
{
    char s[50][40];
     int i,j,n;
     printf("enter the entries to be enter");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
         gets(&s[i][0]);
     }
     for(i=0;i<=n;i++)
     {
         puts(&s[i][0]);
     }

}
