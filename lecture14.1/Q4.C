#include <stdio.h>
int main() 
{
    int row, col;
    printf("Enter the array's row size:");
    scanf("%d", &row);
    printf("Enter the array's column size:");
    scanf("%d", &col);
    int arr[row][col];
    printf("Enter array's elements:\n");
    for ( int i=0;i<row;i++)
     {
        for ( int j=0; j<col;j++)
         {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int rowNum, columnNum;
     printf("Enter row number:");
    scanf("%d", &rowNum);
     printf("Elements of row %d:",rowNum);
    for (int j=0; j<col; j++) 
    {
        printf("%d",arr[rowNum][j]);
    }
    printf("\n");
    int rowSum=0;
    for (int j=0;j<col;j++)
     {
        rowSum += arr[rowNum][j];
    }
    printf("The sum of row %d: %d\n", rowNum, rowSum);
     printf("\nEnter column number: ");
    scanf("%d", &columnNum);
    printf("Elements of column %d:", columnNum);
    for (int i=0;i<row;i++)
    {
        printf("%d ",arr[i][columnNum]);
    }
    printf("\n");
    int columnSum = 0;
    for (int i=0; i<row;i++) 
    {
        columnSum+=arr[i][columnNum];
    }
    printf("The sum of column %d: %d\n", columnNum,columnSum);
    return 0;
}
