
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c;
    int mul=0, add=0;
    printf("Enter three numbers i will tell you add");
    scanf("%d,%d,%d", &a,&b,&c); //e.g 3,1,4
    mul=a*b*c;
    add=a+b+c;
    printf("Addition=%d\n", add);

    printf("multipication=%d",mul);

    return 0;
}
