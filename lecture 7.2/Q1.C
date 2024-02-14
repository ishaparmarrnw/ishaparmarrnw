#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a value of the first number:");
    scanf("%d",&a);
    printf("enter a value of the second number:");
    scanf("%d",&b);
    printf("enter the of the third nuber:");
    scanf("%d",&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("a is minimum value:%d",a);
        }
    }
    if(b<a)
    {
        if(b<c)
        {
            printf("b is minimum value is:%d",b);

        }

    }
    if(c<a)
    {
        if(c<a)
        {
            printf("c is minimum value is:%d",c);
            
        }
    }
    return 0;
}