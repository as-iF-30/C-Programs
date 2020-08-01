#include<stdio.h>
main()
{
	int y;
	char x;
	printf("Enter your marks out of 100=");
	scanf("%d",&y);
	
	if(y>=90&&y<100)
	x='A';
	else
	if(y>=80&&y<90)
	x='B';
	else
	if(y>=70&&y<80)
	x='C';
	else
	if(y>60&&y<70)
	x='D';
	else
	if(y>0&&y<60)
	x='E';
	printf("Your grade is %c",x);
	if(y>0&&y<60)
	printf("\nVery Low marks");
	printf("\n 90-100 ==>A");
	printf("\n 80-90 ==>B");
	printf("\n 70-80 ==>C");
	printf("\n 60-70 ==>D");
	printf("\n 0-60 ==>E");
}
