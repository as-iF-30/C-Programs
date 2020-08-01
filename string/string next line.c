#include <stdio.h>
#include <string.h>
int main()
{
  char name[25];
  int i;
  printf("Enter your name\n");
  gets(name);
  for(i=0;i<strlen(name);i++)
  {
    printf("%c\n",name[i]);
  }
}
