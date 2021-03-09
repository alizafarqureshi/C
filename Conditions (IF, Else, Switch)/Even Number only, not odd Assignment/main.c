#include <stdio.h>
int main() {
    int even;
    printf("Enter an even number: ");
    scanf("%d", &even);

    if(even % 2 == 0)
        printf("%d is even.", even);
    else
        printf("The entered number is not even number");

    return 0;
}
