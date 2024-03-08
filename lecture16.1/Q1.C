
#include<stdio.h>
int main()
{
  int size;
  scanf("%d",&size);
  char str[size];
  scanf("%s",&str);
  char revstr[size];
  int k = 0;
  for(int i=size-1;i>=0;i--){
      revstr[k] = str[i];
      k++;
  }
  int count  = 0 ;
  for(int i=0;i<size;i++){
      if(revstr[i]!=str[i]){
          count++;
      }
  }
  if(count>0){
    printf("Not a palindrome");
  }else{
      printf("it is a palindrome");
  }
   return 0;
}