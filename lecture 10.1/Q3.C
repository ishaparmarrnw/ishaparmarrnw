
#include<stdio.h>
int main()
{
    int number,first,last,sum;
    printf("enter any number:");
    scanf("%d",&number);
    last=number%10;
    while(number>=10)
    {
       number=number/10;   
    } 
    
       first=number;
       
        sum=first+last;
        printf("the sum first and last digit:%d",sum);
       
      return 0;
    
}