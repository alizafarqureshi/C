#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salary=0;
    double tax=0;
    double GLI=0;
    double PP=0;
    double HI=200;
    double NS=0;
    printf("Enter your salary : ");
    scanf("%lf", &salary);
    tax = salary * 10/100;
    printf("tax is : %lf \n", tax);
    GLI = salary * 2.5/100;
    printf("GLI is : %lf \n", GLI);
    PP = salary * 2.3/100;
    printf("PP is : %lf\n", PP);
    printf("your HI is : %lf\n", HI);
    NS = salary - tax - GLI - PP - HI;
    printf("your NS is : %lf\n", NS);


    return 0;
}
