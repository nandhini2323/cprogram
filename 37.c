#include <stdio.h>
int main(void) 
{
	int a,b;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the number");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("Before swapping %d %d",a);
	printf("After swapping %d %d",b);
	return 0;
}
