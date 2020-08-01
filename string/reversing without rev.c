#include<stdio.h>
#include<string.h>
int main()
{
	char x[20];
	int i,b;
	printf("Enter something:");
	gets(x);
	b=strlen(x)-1;
	printf("reversed string is:");
	for(i=b;i>=0;i--)
	 {
	 	printf("%c",x[i]);
	 }
	 getch();
}
