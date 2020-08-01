//Program to print number os vowels in input
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int i,frequency=0,a,b=0;
	printf("enter the string\n");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
	  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	   ++frequency;
	   else if(str[i]==' ')
       {
           ++b;
       }
    }
    printf("the number of vowel is");
    printf("%c is %d",str[i],frequency);
    a=strlen(str)-frequency-b;
    printf("the number of consonent is: %d", a);

	  return 0;
}
