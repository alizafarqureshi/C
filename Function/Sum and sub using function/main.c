#include <stdio.h>
#include <stdlib.h>

int addition();
int subtraction();

int main()
{
    addition();
    subtraction();

}
int addition()
{
    int n1,n2,sum;
    printf("Enter First Number :");
    scanf("%d", &n1);
    printf("Enter Second Number : ");
    scanf("%d", &n2);
    sum=n1+n2;
    printf("The Sum of two numbers : %d\n",sum);

}
int subtraction()
{
    int n3,n4,sub;
    printf("\nEnter First Number :");
    scanf("%d", &n3);
    printf("Enter Second Number : ");
    scanf("%d", &n4);
    sub=n3-n4;
    printf("Subtraction of two numbers : %d\n",sub);
}
