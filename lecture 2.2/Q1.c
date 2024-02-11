#include<stdio.h>
int main()
{
    float pi= 3.14;
    float radius,area;
    printf(" enter radius of circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of circle:%f\n",area);
    return 0;


}