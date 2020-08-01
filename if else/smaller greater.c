#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c)
    {
        if(a>b)
        {
            printf("a is greater");
        }

    }
   else if(b>a)
   {
       if(b>c)
       {
           printf("b is greater");
       }

   }
   else
   {
       printf("c is greater");
   }
    getch();
}
