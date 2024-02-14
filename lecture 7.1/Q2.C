#include<stdio.h>
int main()
{
    int number;
    printf("enter any number:");
    scanf("%d",&number);
    if(number<0)
       printf(" the number negative:");
     else if(number>0)
     printf("the number is positive: ");
     else
        printf("this number is neutral:");
        return 0;
      
}