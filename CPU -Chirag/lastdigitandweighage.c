#include<stdio.h>

void main()
{
	int a,b,c,d,x,e,f,g,h,i,j,k;
	printf("Enter a 4 digit number\n");
	scanf("%d",&x);
	
	a=x/1000;
	b=x%1000;
	c=x%100;
	d=x%10;
	e=c/10;
	f=b/100;
	g=j*10;
	h=f*100;
	i=a*1000;
	j=c/10;
	k=j*10;
	
	printf("\nLast digit=%d \tWeightage=%d",d,d);
	printf("\nThird digit=%d \tWeightage=%d",e,k);
	printf("\nSecond digit=%d \tWeightage=%d",f,h);
	printf("\nFourth digit=%d \tWeightage=%d",a,i);
}
