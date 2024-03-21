#include <stdio.h>

int cube(int *arr, int rows, int column) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
           
            *(arr + i * column + j) = (*(arr + i * column + j)) * (*(arr + i * column + j)) * (*(arr + i * column + j));
        }
    }
}


int print(int *arr, int rows, int column) {
    printf("Cube of the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
           
            printf("%d ", *(arr + i * column + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, column;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of column : ");
    scanf("%d", &column);

    int arr[rows][column];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    cube(&arr[0][0], rows, column);

    print(&arr[0][0], rows, column);

    return 0;
}