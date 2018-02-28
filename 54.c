#include <stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is the nearest even number",num);
	}
	else
	{
		printf("%d is the nearest even number",num-1);
	}
}
