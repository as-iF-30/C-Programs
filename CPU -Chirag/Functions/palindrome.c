#include<stdio.h>
main()
{
	getvalues();
	condition();

}
getvalues()
{   int x;
	printf("Enter a 3 digit number");
	scanf("%d",&x);	
}
condition()
{
	int x,a,b,c,d;
	a=x/100;
	b=x%100;
	c=b/10;
	d=b%10;
	if(a==c&&a==d)
	printf("Input is a Palindrome");
	else
	printf("Input is not a Palindrome");
}
