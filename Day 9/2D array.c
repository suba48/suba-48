#include <stdio.h>
int main()
 {
    int arr[2][3];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    printf("\nMatrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}