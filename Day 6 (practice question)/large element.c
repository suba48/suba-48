#include <stdio.h>
int main() 
{
    int arr[] = {10, 20, 13, 48, 88, 84};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    printf("Largest element in the array: %d\n", max);
    return 0;
}