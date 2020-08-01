#include<stdio.h>

    struct sd
{
    int accno;
    char name[18];
    int balance;
};
int main()
{
  struct sd bank;
  printf("enter the detail\n");
  scanf("%d\n%s\n%d",&bank.accno,&bank.name,&bank.balance);
  printf("%d\n%s\n%d\n",bank.accno,bank.name,bank.balance);
  printf("%d",sizeof(bank));
}
