#include<stdio.h>
int main()
{
    int p,r,t,interest;
    printf("enter the principal:");
    scanf("%d",&p);
    printf("enter the rate:");
    scanf("%d",&r);
    printf("enter the  time :");
    scanf("%d",&t);
    interest=(p*r*t)/100;
    printf("the simple interst of %d",interest);
    return 0;

}