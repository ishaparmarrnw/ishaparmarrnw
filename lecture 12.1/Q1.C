#include<stdio.h>
int main()
{
     int k;
    for(int i=1;i<=5;i++)
    {
        for( int j=1;j<=i;j++)
        {
            k=40+j;
            printf("%d ",k);

        }
        printf("\n");

    }
    return 0;
}