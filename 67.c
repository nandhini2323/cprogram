#include <stdio.h>
 #include<conio.h>
void main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	a+=1;
	while(a%10!=0)
	{
		a=a+1;
	}
	printf("%d",a);
}
