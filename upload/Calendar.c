#include<stdio.h>
int main()
{
	int year,f=0,k,m,d,c,g,day;
	
	printf("read the instruction carefully\n");
	printf("\n");
    printf("enter the date, month and year in number form only\n");
	scanf("%d %d %d",&k,&m,&year);
   
	 	 d=year%100;
	 	 c=(year-d)/100;
	 	 if(g==1)
	 	 {
		  f=k+1+d+(d%4)+(c%4)-2*c;
	     }
	     else
	     {
	     	if(g==4)
	     	{
	     	f=k+4+d+(d%4)+(c%4)-2*c;	
			 }
			 else
			 {
			 	if(g==0)
			 	{
			 			f=k+0+d+(d%4)+(c%4)-2*c;
				 }
				 else
				 {
				 	if(g==2)
				 	{
				 			f=k+2+d+(d%4)+(c%4)-2*c;
					 }
					 else
					 {
					 	if(g==5)
					 	{
					 			f=k+5+d+(d%4)+(c%4)-2*c;
						 }
						 else
						 {
						 	if(g==3)
						 	{
						 			f=k+3+d+(d%4)+(c%4)-2*c;
							 }
							 else
							 {
							 	if(g==6)
							 	{
							 			f=k+6+d+(d%4)+(c%4)-2*c;
								 }
							 }
						 }
					 }
				 }
			 }
		 }
	 	 day=f%7;
	 	 if(day==0)
	 	 { printf("the day is sunday");
	 	 
		  }
		  else
		  {
		  	if(day==1)
		  	{
		  		printf("it is monday");
			  }
			  else
			  {
			  	if(day==2)
			  	{
			  		printf("it is tuesday");
			  		
				  }
				  else
				  {
				  	if(day==3)
				  	{
				  		printf("the day is wednesday");
					  }
					  else
					  {
					  	if(day==4)
					  	{
					  		printf("the day is thursday");
					  		
						  }
						  else
						  {
						  	if(day==5)
						  	{
						  		printf("the day is friday ");
						  		
							  }
							  else
							  {
							  	if(day==6)
							  	{
							  		printf("the day is saturday");
								  }
							  }
						  }
					  }
				  }
				  
			  }
		  }
	 	 
	 	 
	 	 
	 return 0;	 
	    
}
