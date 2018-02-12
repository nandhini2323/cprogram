#include <stdio.h>
int main(void) {
	int a,b;
	printf("\nEnter the numbers");
	scanf("%d",&a);
	printf("\nEnter the number");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\nBefore swapping %d %d",a);
	printf("\nAfter swapping %d %d",b);
	return 0;
}
