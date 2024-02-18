#include<stdio.h>
int main()
{
    int  number,i=0;
    
     printf("enter any number:");
     scanf("%d",&number);
    while(number!=0)
    {
      number=number/10;
      i++;
    
    }
    printf(" total number of digit:%d",i);
   
    return 0;
}