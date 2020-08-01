#include<stdio.h>
// function prototype, also called function declaration
void swap(int *a, int *b); 
 
int main()
{
    int m = 22, n = 44;
    //  calling swap function by reference
    printf("values before swap m = %d \n and n = %d",m,n);
    swap(&m, &n);         
}
 
void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
    printf("\n values after swap a = %d \nand b = %d", *x, *y);
}
