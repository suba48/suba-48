#include<stdio.h>
int main()
{
    int rows,col,sum=0;
    printf("ENTER THE ROWS: ");
    scanf("%d",&rows);
    printf("ENTER THE COLUMNS: ");
    scanf("%d",&col);
    int a[rows][col];
    printf("ENTER A NUMBER OF %d * %d MATRIX IS ",rows,col);
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("SUM OF THE GIVEN ARRAY IS ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d \n ",sum);
    return 0;
}
