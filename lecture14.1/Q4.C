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
        for ( int j=0;j<col;j++)
         {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int rownum, columnnum;
     printf("Enter row number:");
    scanf("%d", &rownum);
     printf("Elements of row %d:",rownum);
    for (int j=0;j<col;j++) 
    {
        printf("%d",arr[rownum][j]);
    }
    printf("\n");
    int rowsum=0;
    for (int j=0;j<col;j++)
     {
        rowsum+=arr[rownum][j];
    }
    printf("The sum of row %d: %d\n", rownum, rowsum);
     printf("\nEnter column number:");
    scanf("%d", &columnnum);
    printf("Elements of column %d:", columnnum);
    for (int i=0;i<row;i++)
    {
        printf("%d ",arr[i][columnnum]);
    }
    printf("\n");
    int columnsum =0;
    for (int i=0;i<row;i++) 
    {
        columnsum+=arr[i][columnnum];
    }
    printf("The sum of column %d: %d\n", columnnum,columnsum);
    return 0;
}
