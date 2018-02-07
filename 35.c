#include <stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int dig,j;
 dig=j=0;
 printf("Enter any string :");
 gets(str);
  while(str[j]!='\0')
 {
 if(str[j]>='0' && str[j]<='9')
  {
  dig++;
  }
  j++;
  }
  printf("Digits = %d\n", dig);
  return 0;
}
