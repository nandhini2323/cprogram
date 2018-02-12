#include <stdio.h>
#include<conio.h>
int main(void)
{
	int a,b;
	printf("Enter the number ");
	scanf("%d",&a);
	printf("enter the number");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=b^a;
	printf("Before swapping %d",a);
	printf("After swappping %d",b);
	return 0;
}
