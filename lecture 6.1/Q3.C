#include<stdio.h>
int main()
{
    int first,second,third;
    printf("enter the first angle:");
    scanf("%d",&first);
    printf("enter the second angle");
    scanf("%d",&second);
    third=180-first-second;
    printf("enter the third angle is %d",third);
    return 0;
}