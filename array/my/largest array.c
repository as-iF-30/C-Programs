#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    float arr[100],t;

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }
    for(i = 1; i < n; ++i)
    {
       if(arr[0] < arr[i])
       {
           arr[0] = arr[i];
       }

    }
    printf("Largest element = %.1f", arr[0]);
    for(i = 1; i < n; ++i)
    {
       if(arr[0] > arr[i])
       {
           arr[0] = arr[i];
       }

    }
    printf("smallest element = %.1f", arr[0]);
    arr[0]=t;
    printf("\nt%f",t);

    getch();
}
