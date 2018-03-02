#include<stdio.h>
void main()
{
    int i,n,t1=1,t2=0,temp;
    printf("enter the elements");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",t1);
        temp=t1+t2;
        t2=t1;
        t1=temp;
    }
}
