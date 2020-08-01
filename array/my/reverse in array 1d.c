#include <stdio.h>
#include<conio.h>
int main()
{
   int i,n,a[10];
    for(i=0;i<10;i++)
      {
	  printf("element - %d : ",i+1);
	  scanf("%d",&a[i]);
	  }
    printf("The values store into the array are : \n");
   for(i=0;i<10;i++)
     {
	   printf("a[%d]=%d\n",i,a[i]);
	 }
  printf("\n\nThe values store into the array in reverse are :\n");
   for(i=9;i>=0;i--)
      {
	   printf("a[%d]=%d\n",i,a[i]);
	  }
   printf("\n\n");
   getch();
}
