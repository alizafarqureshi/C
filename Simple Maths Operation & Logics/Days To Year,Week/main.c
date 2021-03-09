#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,y,w;
    printf("Enter Number of days\n");
    scanf("%d", &d);
    y = d/365;
    w = d/7;
    printf("%d %d",y,w);
    return 0;
}
