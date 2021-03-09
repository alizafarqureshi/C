#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,mul,sub;
    float div;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    sum =a+b;
    mul= a*b;
    sub= a-b;
    div= a / b;
    printf("Addition : %d\n", sum);
    printf("Subtraction : %d\n", sub);
    printf("Multiplication : %d\n", mul);
    printf("Division : %f\n", div);
    return 0;
}
