#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for( int j=1;j<=6+i;j++)
        {
            printf("  ");
        }
        int d=1;
        for( int k=1;k<=6-i;k++)
        {
            printf("%d ",d);
            if(d==1)
            {
                d=0;
            }
            else
            {
                d=1;
            }
        }
        printf("\n");
    }
    return 0;
}