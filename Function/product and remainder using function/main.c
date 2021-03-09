#include <stdio.h>

int product();
int remainder();

int main()
{
    int result;

    result= product();
    printf("Product of two numbers : %d\n",result);

    result=remainder();
    printf("Remainder of two numbers : %d\n",result);

    return 0;
}
int product()
{
    int n1,n2, pro;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);

    pro=n1 * n2;
    return pro;

}
int remainder()
{
    int n1,n2,r;
    printf("\nEnter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    r= n1 % n2;
    return r;
}
