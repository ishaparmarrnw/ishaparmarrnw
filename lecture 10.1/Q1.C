#include<stdio.h>
int main()
{

    char alphabet='a';
    do 
    {
        printf(" the alphabet a to z:%c\n",alphabet);
        alphabet+=3;
    }
    while(alphabet<='z');
      return 0;    
    
}