#include <stdio.h>
#include<conio.h>
void main()
{
int a[100],n,b=0,i,c;
printf("Enter the n number:");
scanf("%d",&n);
printf("enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b=b+a[i];	
}
c=b/n;
printf("%d",c);
}
