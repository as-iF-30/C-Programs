#include<stdio.h>
#include<conio.h>
int main()
{
   int a[10][10], b[10][10], c[10][10],r1,r2,c1,c2, i, j, k;
   int sum = 0;
   printf("Enter rows and column for first matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix:\n ");
    scanf("%d %d",&r2, &c2);
    if(c1!=r2)
    {
        printf("system will not execute");
    }
    else
   {
   printf("\nEnter First Matrix :\n");
   for (i = 0; i < r1; i++)
   {
      for (j = 0; j < c1; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nEnter Second Matrix:\n");
   for (i = 0; i < r2; i++) {
      for (j = 0; j < c2; j++) {
         scanf("%d", &b[i][j]);
      }
   }

   printf("The First Matrix is: \n");
   for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }

   printf("The Second Matrix is : \n");
   for (i = 0; i < r2; i++) {
      for (j = 0; j < c2; j++) {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }
   for (i = 0; i <r1; i++)
    {
      for (j = 0; j <c2; j++)
      {
         sum = 0;
         for (k = 0; k <3; k++)
         {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
         printf(" %d ",c[i][j]);
      }
      printf("\n");
   }
   }
   getch();
}
