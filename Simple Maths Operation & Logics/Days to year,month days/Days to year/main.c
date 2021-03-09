#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,y,m,d1;

    printf("Please Enter Number of Days\t:\t");
    scanf("%d", &d1);

    y= d1/365; // convert days into year
    d= d1= d1-(y*365);
    m= d1/30;
    d1=d-(m*30+365*y);

    printf("\nYears: %d \nMonths: %d \nDays: %d",y,m,d1);

    return 0;
}
