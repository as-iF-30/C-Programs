#include<stdio.h>
#include<conio.h>
main()
{
	int rl,eng,hindi,pun,math,total,obtain=400;
	char name[20];
	printf("enter the rl of student =");
	scanf("%d",&rl);
	printf("enter the name of student =");
	scanf("%s",name);
	printf("enter the no of eng =");
	scanf("%d",&eng);
	printf("enter the no of hindi =");
	scanf("%d",& hindi);
	printf("enter the no of pun =");
	scanf("%d",& pun);
	printf("enter the no of math =");
	scanf("%d",& math);
	total=eng+hindi+pun+math;
	printf("%d\n",total);
	float per;
	per=(total*100)/obtain;
	printf("%f",per);
	if(per>=60)
	{
		printf("\nstudent is first");
	}
	else
	if(per<60&&per>=45)
	{
	printf("\nstudent is second");
	}
	else
	if(per<45&&per>=30)
	{
		printf("\nStudent is third");
	}
	getch();
}
