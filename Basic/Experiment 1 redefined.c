#include<stdio.h>
main()
{int i,j,r;
   printf("Enter r=");
   scanf("%d",&r ); 
    for(i=1;i<=r;i++)
   {
   for(j=1;j<=r;j++) 
   {
   if(j<i) 
  {printf(" ");
  } 
  else
{printf("*");
   }
} 
printf("\n") ;
}
}

