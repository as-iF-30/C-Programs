#include<stdio.h>
main()
{
	int i,d,n;
	printf("Enter the value of purchase");
	scanf("%d",&i);
	printf("Press 1 for Purchase of above 500Rs.\nPress 2 for Purchase of above 1000Rs\nPress 3 for Purchase of above 5000Rs.\n");
	printf("Press 4 for Purchase of above 20000Rs.\nPress 5 for Purchase of above 50000Rs.\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{	
		d=(i/20);
		printf("Discount is %d",d);
		break;
	    }
	    
		case 2:
		{
		d=(i/10);
		printf("Discount is %d",d);
		break;
	    }
	    
		case 3:
		{
		d=(i/5);
		printf("Discount is %d",d);
		break;
	    }
	    
		case 4:
		{
		d=(i/4);
		printf("Discount is %d",d);
		break;
	    }
	    
		case 5:
	    {
		d=(i/100*(30));
		printf("Discount is %d",d);
		break;
	    }
	    default:
		printf("No Discount");
	    
	}
	
}
