#include <stdio.h>
int main()
{
int amt=0, temp=0;
printf("enter amount: ");
scanf("%d", &amt);

temp= amt/100;
amt=amt-(temp*100);

printf("\n100 Notes : %d",temp);

temp= amt/50;
amt=amt-(temp*50);

printf("\n50 Notes : %d",temp);

temp= amt/20;
amt=amt-(temp*20);

printf("\n20 Notes : %d",temp);

temp= amt/10;
amt=amt-(temp*10);

printf("\n10 Notes : %d",temp);

temp= amt/5;
amt=amt-(temp*5);

printf("\n5 Notes : %d",temp);

temp= amt/2;
amt=amt-(temp*2);

printf("\n2 Notes : %d",temp);

temp= amt/1;
amt=amt-(temp*1);

printf("\n1 Notes : %d",temp);

return 0;
}
