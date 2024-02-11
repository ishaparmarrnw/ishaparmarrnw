#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the first number:");
  scanf(" %d",&a);
  printf("enter the second number:");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swap the first number is:%d\n",a);
  printf("after swap the second numbber is:%d\n",b );
  return 0;
}