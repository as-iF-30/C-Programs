#include<stdio.h>
main()
{
	int x,a,b,c,d,e,f,g,h;
	char i,j,k,l,One,Two,Three;
	printf("---**Number can be of max 4 digits**---\n");
	printf("***************************************\n");
	printf("Enter a number:");
	scanf("%d",&x);
	//let Input be 8921
	a=x/1000;  //1st Digit ==8
	b=x/100;   // ==89
	c=x/10;    // ==892
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			printf("Input is 1 digit number");
			else
			printf("Input is 2 digit number");
		}
		else
		printf("Input is 3 digit number");
	}
	else
	{
	printf("Input is 4 digit number\n");
	d=x%1000;  // ==921
	e=d/100;//2nd Digit ==9
	f=d%100;// ==21
	g=f/10; //3rd Digit ==2
	h=f%10; //4th Digit ==1
    }
	switch(a)
	{
		case 1:
			i="One";
			break;
		case 2:
			i="Two";
			break;
		case 3:
			i="Three";
			break;
		case 4:
			i='Four';
			break;
		case 5:
			i='Five';
		    break;
	    case 6:
			i='Six';
			break;
		case 7:
			i='Seven';
			break;
		case 8:
			i='Eight';
			break;
		case 9:
			i='Nine';
			break;
		default:
			i=' ';
	}
	switch(e)
	{
		case 1:
			j='One';
			break;
		case 2:
			j='Two';
			break;
		case 3:
			j='Three';
			break;
		case 4:
			j='Four';
			break;
		case 5:
			j='Five';
		    break;
	    case 6:
			j='Six';
			break;
		case 7:
			j='Seven';
			break;
		case 8:
			j='Eight';
			break;
		case 9:
			j='Nine';
			break;
		default:
			j=' ';
	}
	switch(g)
	{
		case 1:
			k='Eleven';
			break;
		case 2:
			k='Twenty';
			break;
		case 3:
			k='Thirty';
			break;
		case 4:
			k='Forty';
			break;
		case 5:
			k='Fifty';
		    break;
	    case 6:
			k='Sixty';
			break;
		case 7:
			k='Seventy';
			break;
		case 8:
			k='Eighty';
			break;
		case 9:
			k='Ninety';
			break;
		default:
			k=' ';
	}
	switch(h)
	{
		case 1:
			l='One';
			break;
		case 2:
			l='Two';
			break;
		case 3:
			l='Three';
			break;
		case 4:
			l='Four';
			break;
		case 5:
			l='Five';
		    break;
	    case 6:
			l='Six';
			break;
		case 7:
			l='Seven';
			break;
		case 8:
			l='Eight';
			break;
		case 9:
			l='Nine';
			break;
		default:
			l='Zero';
	}
	if(c==0)
	{
		printf("%c",l);
	}
	else
	if(b==0)
	{
		if(g==1&&h==1)
		printf("Eleven");
		else
		printf("%c %c",k,l);
	}
	else
	if(a==0)
	{
		printf("%c Hundred and %c %c",j,k,l);
	}
	else
	printf("%c Thousand %c Hundred and %c %c",i,j,k,l);
}
