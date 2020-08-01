#include<stdio.h>
#include<conio.h>
main()
{
	int math,hindi,sst,sci,total;
	printf("enter the value of math =");
	scanf("%d",& math);
	printf("enter the value of hindi =");
	scanf("%d",& hindi);
	printf("enter the value of sst =");
	scanf("%d",& sst);
	printf("enter the value of sci =");
	scanf("%d",& sci);
	total=math+hindi+sst+sci;
	printf("%d",total);
	getch();
}
