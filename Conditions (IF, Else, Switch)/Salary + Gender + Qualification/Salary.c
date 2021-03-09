#include <stdio.h>
#include <stdlib.h>
int main()
{
    char G,Q;
    int  Y;
    printf("Enter your Gender(F/M)=");
    scanf(" %c",&G);
    printf("Enter years of service=");
    scanf("%d",&Y);
    printf("\nNote that P=Post Graduate,G=Graduate\n");
    printf("\n\nEnter your Qualification=");
    scanf(" %c",&Q);

   if( G=='M' || 'm' &&  Y>=10 && Q=='P' || 'p')

    printf("Your salary is 15000");

   else if( G=='F' | 'f' &&  Y>=10 && Q=='P' || 'p')

   printf("your salary is 12000");

  else if( G=='M' || 'm' &&  Y>=10 && Q=='G' || 'g')

    printf("Your salary is 10000");

  else if( G=='M' ||'m' &&  Y<10 && Q=='P' || 'p')

  printf("your salary is 10000");

  else if( G=='M' || 'm'  &&  Y<10 && Q=='G' || 'g')

  printf("Your salary is 7000");

  else if( G=='F'  || 'f' &&  Y>=10 && Q=='G' || 'g')

  printf("Your salary is 9000");

  else if( G=='F' || 'f'  &&  Y<10 && Q=='P' || 'p')

  printf("Your salary is 10000");

  else if( G=='F'  || 'f' &&  Y<10 && Q=='G' || 'g')

  printf("your salary is 6000");

  else
  printf("Invalid Input");

return 0;





}
