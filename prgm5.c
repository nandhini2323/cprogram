#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter values a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf(" a is greater");
}
else
{
printf("c is greater");
}
}
elseif(b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
}
