#include<stdio.h>
int main(void)
{
   float a,b;
   float p;
   printf("Enter Obtained Marks : ");
   scanf("%f", &a);
   printf("Enter Total Marks : ");
   scanf("%f", &b);
   p = a/b * 100;
   printf("Your Percentage : %.2f%%", p);

    }
