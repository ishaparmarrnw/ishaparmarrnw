#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value  of first number:");
    scanf("%d",&a);
    printf("enter a value of second number:");
    scanf("%d",&b);
    if(a<b)
    {
        printf("the minimum value is:%d",a);
    }
    else
    {
        printf("the minimum value is:%d",b);
    }
     return 0;
}