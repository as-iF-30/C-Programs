#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,e,f,x,g,h,i,j,k,l,m,n,o,p,q,r,s,sum1,sum2;
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
	p=x/100;	
	//Variables written below are for number of 4 digits
	l=pow(a,4);
	m=pow(f,4);
	n=pow(e,4);
	o=pow(d,4);
	sum1=l+m+n+o;
	//Variables written below are for number of 3 digits
	q=pow(f,3);
	r=pow(e,3);
	s=pow(d,3);
	sum2=q+r+s;
	/*
	printf("\nLast digit=%d \tWeightage=%d",d,d);
	printf("\nThird digit=%d \tWeightage=%d",e,k);
	printf("\nSecond digit=%d \tWeightage=%d",f,h);
	printf("\nFirst digit=%d \tWeightage=%d",a,i);
	*/
	if(a>0&&sum1==x)
	{printf("\nNumber is an Armstrong Number");
	 } 
	else 
	if(p>0&&a==0&&sum2==x)
	 {printf("\nNumber is an Armstrong Number");
     }
	else
	printf("\nEntered number is not an Armstrong number");
}
