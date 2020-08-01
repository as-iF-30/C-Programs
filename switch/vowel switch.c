#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
 {
  char a;
  printf("enter your choice");
  scanf("%c",&a);
  switch(a)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
      printf("it is a vowel");
      break;
  default:
    printf("it is not a vowel");
  }
  getch();
 }

