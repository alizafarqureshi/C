#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s,s1;
    printf("Enter Seconds : \n");
    scanf("%d",&s1);

    h=s1/3600;
    m=s1-(h*3600); //or m=(s1-(h*3600))/60;
    m=m/60;
    s=s1-(3600*h); //or s=(s1-(3600*h)-(m*60));
    s=s-(m*60);

    printf("Hour %d: Min %d; sec: %d",h,m,s);
    return 0;
}
