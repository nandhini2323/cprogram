#include<stdio.h>
#include<conio.h>
int main()
{
int low,high,i,flag;
printf("enter the two no's(intervals):");
scanf("%d%d",&low,&high);
printf("prime no's between %d and %d are:",low,high);
while(low<high)
{
flag=0;
for(i=2;i<=low/2;i++)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",low);
low++;
}
return 0;
}
