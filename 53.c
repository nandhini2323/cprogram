#include<stdio.h>
#include<conio.h>
int main()
{
int n,x,sum;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
printf("%d",sum);
return 0;
}                       
