//program to reverse a string without using string reverse//
#include<stdio.h>
int main()
{
	char x[20];
	int i,b;
	printf("Enter something:");
	gets(x);
	b=strlen(x)-1;
	for(i=b;i>=0;i--)
	 {
	 	printf("%c",x[i]);
	 }
}
