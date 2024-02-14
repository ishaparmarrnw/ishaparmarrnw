#include<stdio.h>
int main()
{
    int a,b,c,result;
    printf("enter  a value of the first number:");
    scanf("%d",&a);
    printf(" enter a value of the secon number:");
    scanf("%d",&b);
    printf("enter a value of the third number:");
    scanf("%d",&c);
    result=c<(a<b?a:b)?c:((a<b)?a:b);
    printf("the minimum value=%d",result);
    return 0;

}