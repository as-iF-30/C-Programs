#include<stdio.h>
#include<conio.h>
struct student
{
 int roll;
 char name[12];
 int percent;
}
s1 = {10, "SMJC", 80};
int main()
{
    FILE *fp;
    struct student s2;
    fp=fopen("ip.txt", "w");
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);
    fp=fopen("ip.txt", "r");
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);
    printf("\n Roll : ;%d", s2.roll);
    printf("\n Name : %s", s2.name);
    printf("\npercent : %d", s2.percent);
    getch();
}
