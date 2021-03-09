#include <stdio.h>
#include <stdlib.h>

//Pointers

/*int main()
{
    int a = 30;
    float b= 1.555;
    char grade = 'A';
    char S[]= "Quick";
    printf(" %p\n %p\n %p\n %p\n ",a,b,grade,S );
    return 0;
}
*/
//* Deference Of Pointer
int main(){
 int age = 30;
 int *pAge= &age;
 printf("%d", *&age); // or printf("%d", &*&age); But print memory address not 30
 return 0; // printf("%d", *&*&age); print 30
}


