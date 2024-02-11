#include<stdio.h>
int main()
{
    float pi=3.14;
  float radius,perimeter,area;
    printf("enter radius of the circle:");
    scanf("%f",&radius);
    perimeter=2*pi*radius;
    printf("enter the perimeter of the circle:%f\n",perimeter);
    area=pi*radius*radius;
    printf("area of circle of %f\n",area);
    return 0;
}