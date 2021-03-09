#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int main()
{
    int array[max_size];
    int i=0,pos=0,size=0;
    printf("Please Enter the size of array : "); //Number of elements in array
    scanf("%d", &size);
    if(size>0)
        {
    printf("\nPlease Enter the Elements of array : ");

    for(i=0;i<size;i++) //Enter elements in array
    {

    scanf("%d", &array[i]);

    }

    printf("\nPlease enter the position of the element to delete :  ");
    scanf("%d", &pos);

    if(pos < 0 || pos > size)
    {
        printf("\n\nWrong input ! Please Enter a number from 1 to %d.",size);
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
            array[i]=array[i+1];
    }

    --size;

    printf("\nThe elements of array after delete : ");
    for(i=0; i<size;i++)
    {
        printf("%d   ",array[i]);
    }

        }
        else {
            printf("\nWrong Input ! Please Enter positive number to set the size of array");
        }
    return 0;
}
