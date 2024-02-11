#include<stdio.h>
int main()
{
    int a=12;
    int b=6;
    int addition=a+b;
    int subtraction=a-b;
    int multiply=a*b;
    int divison=a/b;
    int modulo=a%b;
    printf("addition of %d+%d is %d\n",a,b,addition);
    printf("subtraction of %d-%d is %d\n",a,b,subtraction);
    printf("multiply  of %d*%d is %d\n",a,b,multiply);
    printf("divison of %d/%d is %d\n",a,b,divison);
    printf("modulo of %d%%d is %d\n",a,b,modulo);
    return 0;
}