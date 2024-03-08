#include <stdio.h>
int main()
{
int len;
   char str[50];
   printf("enter any string:");
   scanf("%s",&str);
   printf("\nfrequency of each letter:");
  for(int i=0;str[i]!=0;i++)
  {
    len=1;
    for(int j=i+1;str[j]!=0;j++)
    {
       if(str[i]==str[j])
        {
            len++;
            str[j]='!';
        }
    }
    if(str[i]!='!')
    printf("\n %c:%d",str[i],len);
  }
return 0;
}