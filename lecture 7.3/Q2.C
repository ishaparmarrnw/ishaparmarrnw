#include<stdio.h>
int main()
{
    int  choice;
     printf("press 1 for english\n");
    printf("press 2 for  hindi\n");
    printf("press 3 for  gujarati\n");
     printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("internet recharge ke liye 1  dabaiye\n");
        break;
         case 2:
        printf("top-up recharge ke liye 2 dabaiye\n");
        break;
         case 3:
        printf("special recharge ke liye 3 dabaiye\n");
        break;
        default:
        printf("invalid choice.\n");


    }
    return 0;
}