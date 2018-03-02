#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    printf("the numbers before swapping%d%d",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("the numbers after swapping%d%d",a,b);
}
