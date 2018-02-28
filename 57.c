#include <stdio.h>
#include<conio.h>
void main() 
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("the numbers before swapping%d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the numbers after swapping%d%d",a,b);
}
