#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the array's size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array's elements:\n");
    for(int i=0;i<size;i++) 
    {
        printf("a[%d]=", i);
        scanf("%d",&arr[i]);
    }
    printf("negative elements from array:\n");
    for(int i=0;i<size;i++) 
    {
        if (arr[i]<0)
        {
            printf("%d",arr[i]);
        }
    }
     return 0;
}  
    