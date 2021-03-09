#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("Project.txt", "r");
    fgets(line, 255, fpointer); //Read first line of the file
    fgets(line, 255, fpointer); //Read 2nd line of the file
    fgets(line, 255, fpointer); //Read 3rd line of the file
    printf("%s",line);

    return 0;
}
