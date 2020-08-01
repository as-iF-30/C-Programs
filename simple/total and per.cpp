#include<stdio.h>
#include<conio.h>
main()
{
	int math,hindi,punjabi,total,obtain=300;
	printf("enter the no of math =");
	scanf("%d",& math);
 	printf("enter the no of hindi =");
	scanf("%d",& hindi);
	printf("enter the no of punjabi =");
 	scanf("%d",& punjabi);
	total=math+hindi+punjabi;
	printf("%d\n",total);
 	float per;
	per=(total*100)/obtain;
	printf("%f",per);
	getch();
}
