#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character is = %c", ch);
    fclose(fptr);
    return 0;
}