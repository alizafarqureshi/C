//UDF returning a Value

#include<stdio.h>

int add(void);     //Declaration


 int main(void)
 {
 int a;
printf("\n Welcome to the Calculator Program using User Defined Function");
 a= add();   //Function Call
 printf("\n The addition of two numbers is %d",a);

 return 0;
 }
 int  add(void)    ///Function Definition
{
int a,b,c;
printf("\nEnter Two numbers To Add : \t");
scanf("%d", &b);
printf("\nEnter Two numbers To Add : \t ");
scanf("%d", &a);
c=a+b;


 return(c);
 }
