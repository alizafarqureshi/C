#include <stdio.h>
int main() {
    int num, i, sum = 0;
    do {
        printf("Enter a Natural Number: ");
        scanf("%d", &num);
    } while (num <= 0);

    for (i = 1; i <= num; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
