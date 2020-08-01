#include<stdio.h>
main()
{
	char str[20];
	int x1,x2,y1,y2,z1,z2,r1,r2,s,q,p;
	float r;
	printf("Enter Your Name: ");
	scanf("%s",str);
	printf("Welcome %s\n",str);
	printf("**First Enter Hour value then press Enter then you will be asked for minute value of Time**\n");
	printf("Enter all values according to 24 Hour system\n");
	printf("Enter Time In:\n");
	printf("Hour value:");
	scanf("%d",&x1);
	printf("Minute value:");
	scanf("%d",&x2);
	printf("Enter Time Out:\n");
	printf("Hour value:");
	scanf("%d",&y1);
	printf("Minute value:");
	scanf("%d",&y2);
	p=(x1*60)+x2;
	q=(y1*60)+y2;
	r=(q-p)/60;
	r1=(q-p)/60;
	r2=(q-p)%60;
	s=(r1*10)+20;
	if(r<=4)
	{
		//Parking Slip
		{
			printf("***********************************\n");
			printf("* Name:- %s                   *\n",str);
			printf("* Time In: %d:%d                   *\n",x1,x2);
			printf("* Time Out: %d:%d                  *\n",y1,y2);
			printf("* Parking Cost: 20 Rs.            *\n");
			printf("* Parking used for Time= %d:%d Hrs *\n",r1,r2);
			printf("***********************************\n");
		}
	}
	else
	{
		//Parking Slip
		{
			printf("***********************************\n");
			printf("* Name:- %s                   *\n",str);
			printf("* Time In: %d:%d                  *\n",x1,x2);
			printf("* Time Out: %d:%d                 *\n",y1,y2);
			printf("* Parking Cost:%d                *\n",s);
			printf("* Parking used for Time= %d:%d Hrs *\n",r1,r2);
			printf("***********************************\n");
		}
	}
}

