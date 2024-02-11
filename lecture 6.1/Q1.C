#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("the teperature in celcius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("the teperature  in faherenheit:%f",fahrenheit);
    return 0;
}