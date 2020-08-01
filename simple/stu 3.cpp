#include<stdio.h>
#include<conio.h>
main()
{
	int rl,rl1,rl2,eng,hindi,total,obtain=200;
	char name[20],name1[18],name2[18];
	printf("enter the rl of stud=");
	scanf("%d",&rl);
	printf("enter the name of stud =");
	scanf("%s",&name);
	printf("enter value of eng =");
	scanf("%d",&eng);
	printf("enter value of hindi =");
	scanf("%d",&hindi);
	total=eng+hindi;
	printf("%d\n",total);
	float per;
	per=(total*100)/obtain;
	printf("%f",per);
	if(per>=90)
	{
		printf("\nstudent is first");
	}
	else
	if(per<90&&per>=70)
	{
		printf("\nstudent is second");
	}
	else
	if(per<70&&per>=50)
	{
		printf("\nStudent is third");
	}
	printf("\nenter the rl of stud  =");
	scanf("%d",&rl);
	printf("enter the name of stud =");
	scanf("%s",&name);
	printf("enter value of eng =");
	scanf("%d",&eng);
	printf("enter value of hindi =");
	scanf("%d",&hindi);
	total=eng+hindi;
	printf("%d\n",total);
	per=(total*100)/obtain;
	printf("%f",per);
	if(per>=90)
	{
		printf("\nstudent is first");
	}
	else
	if(per<90&&per>=70)
	{
		printf("\nstudent is second");
	}
	else
	if(per<70&&per>=50)
	{
		printf("\nStudent is third");
	}
	printf("\nenter the rl of stud =");
	scanf("%d",&rl);
	printf("enter the name of stud =");
	scanf("%s",&name);
	printf("enter value of eng =");
	scanf("%d",&eng);
	printf("enter value of hindi =");
	scanf("%d",&hindi);
	total=eng+hindi;
	printf("%d\n",total);
	per=(total*100)/obtain;
	printf("%f",per);
	if(per>=90)
	{
		printf("\nstudent is first");
	}
	else
	if(per<90&&per>=70)
	{
		printf("\nstudent is second");
	}
	else
	if(per<70&&per>=50)
	{
		printf("\nStudent is third");
	}
	getch();
}
