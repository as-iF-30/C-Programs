#include<stdio.h>
void main()
{
	char c;
	printf("Enter something\n");
	scanf("%c",&c);
	
	if(c>= 'a' && c<='z')
	printf("\nGiven input is an lower case Alphabet");
	
	else if(c>='A' && c<='Z')
	printf("\nGiven input is an upper case Alphabet");
	
	else if(c>='0' && c<='9')
	printf("\nGiven input is a Number");
	
	else if(c==' ')
	printf("\nGiven input is a white space character");
	
	else
	printf("\nGiven input is a symbol");
}
