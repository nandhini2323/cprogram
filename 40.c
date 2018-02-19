#include <stdio.h>
#include<conio.h>
int main()
{
    int x,y,z, i, series;
    printf("Enter number of series ");
    scanf("%d", &series);
    x = 0;
    y = 1;
    z = 0;
printf("Fibonacci terms");
for(i=1; i<=series; i++)
    {
        printf("%d, ", z);
     x=y;
     y=z;
     z=y+x;
    }

    return 0;
}
