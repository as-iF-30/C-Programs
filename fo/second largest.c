
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    float arr[100],min;

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
    printf("%.1f",arr[0]);
    arr[0]=min;
    printf("first largest%f",min);
    for(i=1;i<n;i++)
    {
        if(arr[0]<arr[i]&&arr[i]<min)
        {
            arr[0] = arr[i];
        }

    }
    printf("second largest %d",arr[0]);
}
