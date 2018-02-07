#include <stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int dig,i;
 dig=i=0;
 printf("Enter any string :");
 gets(str);
  while(str[i]!='\0')
 {
 if(str[i]>='0' && str[i]<='9')
  {
  dig++;
  }
  i++;
  }
  printf("Digits = %d\n", dig);
  return 0;
}
