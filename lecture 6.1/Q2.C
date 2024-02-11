#include<stdio.h>
int main()
{
    int  salary,hra,da,ta,rs;
    printf("enter the base salary:");
    scanf("%d",&salary);
    printf("the enter hra:");
    scanf("%d",&hra);
     printf("the enter da:");
    scanf("%d",&da);
     printf("the enter ta:");
    scanf("%d",&ta);
    rs=salary+hra+da+ta;
    printf("the rupess of %d",rs);
    return 0;
}
    