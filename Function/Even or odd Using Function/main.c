#include <stdio.h>
#include <stdlib.h>

int remainder(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("\n");
    remainder(n);
}
int remainder(int n)
{
    if(n %2== 0)
       {
        printf("The number is even");
       }
    else
        {
    printf("The number is odd");
}
}
