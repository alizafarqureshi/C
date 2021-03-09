#include <stdio.h>
#include <stdlib.h>

int main()
{
    table(table);
}

int table(int table)
{
    int i,n,t;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The table of %d :- \n",n);

    for(i=1;i<=10;i++)
    {
        t = n * i;
        printf("%d x %d = %d\n",n,i,t);
    }
    return t;
}
