#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
 {
  long int a,b,c,d,e,f,g,h,i,j,k;
  printf("enter the amount:");
  scanf("%ld",&a);
  if(a<=500)
  {
      printf("sorry no discount\n");
      printf("your total amount is%ld\n",a);
  }
  else if(a>500&&a<=1000)
  {
      b=a*5/100;
      c=a-b;
      printf("you got 5 percent discount\n");
      printf("your total amount is%ld\n",c);
  }
  else if(a>1000&&a<=5000)
  {
      d=a*10/100;
      e=a-d;
      printf("you got 10 percent discount\n");
      printf("your total amount is%ld\n",e);
  }
  else if(a>5000&&a<=20000)
  {
      f=a*20/100;
      g=a-f;
      printf("you got 20 percent discount\n");
      printf("your total amount is%ld\n",g);
  }
  else if(a>20000&&a<=50000)
  {
      h=a*25/100;
      i=a-h;
      printf("you got 25 percent discount\n");
      printf("your total amount is%ld\n",i);
  }
  else if(a>50000)
  {
      j=a*30/100;
      k=a-j;
      printf("you got 30 percent discount\n");
      printf("your total amount is%ld\n",k);
  }
  getch();
 }

