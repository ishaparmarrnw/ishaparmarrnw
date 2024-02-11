#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swap the first number:%d\n",a);
    printf("after swap the second number:%d\n",b);

    return 0;
}