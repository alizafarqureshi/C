#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int p,a,b;
    int ar;
    printf("Enter Length : ");
    scanf("%d",&a);
    printf("Enter Width : ");
    scanf("%d",&b);
    p = 2*(a+b);
    ar = a*b;
    printf("Perimeter = %d\n",p);
    printf("Area = %d", ar);


    return 0;
}
