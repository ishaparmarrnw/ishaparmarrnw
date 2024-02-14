#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a value of the first number:");
    scanf("%d",&a);
    printf("enter a value of the second number:");
    scanf("%d",&b);
    printf("enter a value of the third number:");
    scanf("%d",&c);
    printf("enter a value of the fourth number:");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
           if(a>d)
            {
                printf("a is maximum value is:%d",a);

            }
        
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            if(a>d)
            {
                printf("b is maximum value is:%d",b);
            }
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            if(b>d)
            {
                printf("c is maximum value is:%d",c);
            }
        }
    }
    else
    {
        printf("d is maximum value is:%d",d);
    }
    return 0;
}