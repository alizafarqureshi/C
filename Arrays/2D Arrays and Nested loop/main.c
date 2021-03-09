#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array [2][3] ={
    {1,4,5},
    {9,7,2}
    };
    int i,j;

    for(i=0;i < 2 ;i++){
        for(j=0;j<3;j++){
            printf("%d,", array[i][j]);

        }
printf("\n");

    }
    return 0;
}
