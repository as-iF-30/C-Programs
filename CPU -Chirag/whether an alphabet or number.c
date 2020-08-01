#include<stdio.h>
void main()
{
	char c;
	printf("Enter something\n");
	scanf("%c",&c);
	
	if((c>= 'a' && c<='z')||(c>='A' && c<='Z'))
	printf("\nGiven input is an Alphabet");
	
	else if(c>='0' && c<='9')
	printf("\nGiven input is a Number");
	
	else
	printf("\nGiven input is a symbol");
}
