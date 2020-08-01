#include <stdio.h>
 
// C program to return sum of elements in an array of size n
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
    int i;
 
    // Iterate through all elements and add them to sum
    for (i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
 
int main()
{
    int arr[] = {12,3,4,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, n));
    return 0;
}

