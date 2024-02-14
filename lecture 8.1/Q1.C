#include<stdio.h>
int main()
{
    int number;
    printf("enetr any number:");
    scanf("%d",&number);
    (number%2==0) ? printf(" the even number. ") : printf(" the odd number.");
    return 0;
}