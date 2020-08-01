#include<stdio.h>
main()
{
	int x,a,b,c,d,e,f,y;
	printf("Enter a number:");
	scanf("%d",&x);
	// Let input be 6389
	a=x/1000; // a=6
	b=x%1000; // b=389
	c=b/100;  // c=3
	d=b%100;  // d=89
	e=d/10;   // e=8
	f=d%10;   // f=9
	y=(f*1000)+(e*100)+(c*10)+(a);
	printf("%d",y);
	
}
