#include <stdio.h>
int main()
{
int n = 5;
int x = n;
int y = n;
int i,j;
for(i = 1; i <= n; i++)
{
for(j = 1; j < n*2; j++)
{
if (j>=x&& j<=y)
{
printf("*"); }
else
{
printf("");}
}
x- y++;
printf("\n");
}
return 0;}
