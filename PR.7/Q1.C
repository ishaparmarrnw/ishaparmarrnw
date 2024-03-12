#include <stdio.h>
#include <math.h>

float add(float first,float second);
float sub(float first,float second);
float multi(float first,float second);
float div(float first,float second);
float modulo(float first,float second);

float add(float first,float second )
{
  return first+second;
}
float sub(float first,float second)
{
  return first-second;
}
float multi(float first,float second)
{
  return first*second;
}
float div(float first,float second)
{
  return first/second;
}
float modulo(float first,float second)
{
 return fmod(first,second);
}

int main()
{
  int choice;
  float first,second,result;
  do
    {
      printf("\nPress1 for add:");
      printf("\nPress2 for sub:");
      printf("\nPress3 for multi:");
      printf("\nPress4 for div:");
      printf("\nPress5 for modulo:");
      printf("\nPress0 for exit:");
      
      printf("\n\nEnter your choice:");
      scanf("%d",&choice);
      
      if(choice==0)
      {
        printf("the quit calcultor:");
        break;
      }
      switch(choice)
        {
         case 1:
          printf("enter the first number:");
          scanf("%f",&first);
          printf("enter the second number:");
          scanf("%f",&second);
          printf("addition of:%f",add(first,second));
          break;
          
         case 2:
          printf("enter the first number:");
          scanf("%f",&first);
          printf("enter the second number:");
          scanf("%f",&second);
          printf("subtraction of:%f",sub(first,second));
           break;
           
          case 3:
            printf("enter the first number:");
            scanf("%f",&first);
            printf("enter the second number:");
            scanf("%f",&second);
            printf("multiplication  of:%f",multi(first,second));
            break;
            
          case 4:
            printf("enter the first number:");
            scanf("%f",&first);
            printf("enter the second number:");
            scanf("%f",&second);
            printf("divison of:%f",div(first,second));
            break;
            
          case 5:
           printf("enter the first number:");
           scanf("%f",&first);
           printf("enter the second number:");
           scanf("%f",&second);
           printf("modulo of:%f",modulo(first,second));
           break;
           
          default:
           printf("\ninvalid choice.");
           break;
        }
    }
    while (choice!=0);
  return 0;
}
