//Ali Zafar Qureshi 2012374

#include <stdio.h>

int main() {

    int i=1;
    float dis=0,fare=0,rate=0,tax=0,income=0,taxableincome=0,n=0;
    printf("Enter the number of trips: ");
    scanf("%f",&n);
    while(n>0)
    {
        printf("Enter the distance for trips %d in kilometers : ",i);
        scanf("%f",&dis);
        if(dis>0 && dis<=5)
        {
            fare=4;
            income+=fare;
            printf("Total charges for trip %d is %.2f \n", i, fare);
        }
        else if(dis>5 && dis<=10)
        {
            rate=2;
            fare=rate+3+0.60*(dis-5);
            income+=fare;
            taxableincome+=fare;
            printf("Total charges for trip %d is %.2f \n", i, fare);
        }
        else if(dis>10)
        {
            rate=3;
            fare=rate+3.50+0.45*(dis-5);
            income+=fare;
            taxableincome+=fare;
            printf("Total charges for trip %d is %.2f \n", i, fare);
        }
        n--;
        i++;
    }
    printf("Total gross income = %.2f \n",income);
    printf("Total taxable income = %.2f \n", taxableincome);
    tax=0.06*taxableincome;
    printf("Total tax is %.2f \n",tax);
    float dincome=income-tax;
    printf("Total driver income = %.2f \n",dincome);

    return 0;
}
