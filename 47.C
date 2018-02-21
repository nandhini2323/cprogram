#include<stdio.h>
void main()
{
int a[100],b,n,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
	if(a[i]>a[j])
	{            
		b=a[i];
		a[i]=a[j];
		a[j]=b;
		
	}
}
}
printf("%d\n%d",a[0],a[n-1]);
}
