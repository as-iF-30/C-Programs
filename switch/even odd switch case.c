#include<stdio.h>
int main()
{
int remainder,a;
scanf("%d",&a);
remainder = a % 2;
switch(remainder)
{
case 0 : printf("\n %d is an even number.",a);
                                     break;
case 1 : printf("\n %d is an odd number.",a);
                                     break;
}
}
