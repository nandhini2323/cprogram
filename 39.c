#include<stdio.h>
#include<stdio.h>
void main()
{
	int n,i,big,a[10];
	printf("Enter the n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=0;i<n;i++)
	{
	if(a[0]<a[i])
	{
		a[0]=a[i];
	}
	}
	printf("maximum number is");
	printf("%d",a[0]);
}
