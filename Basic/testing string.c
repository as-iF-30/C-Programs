#include<stdio.h>
main()
{
	int x,a,b,c,d,e,f,g,h;
	
	char string1[4]= "One";
	char string2[4]= "Two";
	char string3[6]= "Three";
	char string4[5]= "Five";
	char string5[4]= "Six";
	char string6[6]= "Seven";
	char string7[6]= "Eight";
	char string8[5]= "Nine";
	char string9[7]= "Eleven";
	char string10[7]= "Twelve";
	char string11[9]= "Thirteen";
	char string12[9]= "Fourteen";
	char string13[8]= "Fifteen";
	char string14[8]= "Sixteen";
	char string15[10]="Seventeen";
	char string16[9]= "Eighteen";
	char string17[9]= "Nineteen";
	char string18[7]= "Twenty";
	char string19[7]= "Thirty";
	char string20[6]= "Forty";
	char string21[6]= "Fifty";
	char string22[6]= "Sixty";
	char string23[8]= "Seventy";
	char string24[7]= "Eighty";
	char string25[7]= "Ninety";

	printf("---**Number can be of max 4 digits**---\n");
	printf("***************************************\n");
	printf("Enter a number:");
	scanf("%d",&x);
	//let Input be 8921
	a=x/1000;  //1st Digit ==8
	b=x/100;   // ==89
	c=x/10;    // ==892
	d=x%1000;  // ==921
	e=d/100;//2nd Digit ==9
	f=d%100;// ==21
	g=f/10; //3rd Digit ==2
	h=f%10; //4th Digit ==1
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
			printf("Input is 1 digit number");
			if(h==1)
			printf("%c",string1);
			else
			if(h==2)
			printf("%c",string2);
			else
			if(h==3)
			printf("%c",string3);
			
			else
			{
			printf("Input is 2 digit number");
			if()
		}
		else
		printf("Input is 3 digit number");
	}
	else
	{
	printf("Input is 4 digit number\n");
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
