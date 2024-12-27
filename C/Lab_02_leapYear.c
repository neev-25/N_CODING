#include <stdio.h>

int main()
{
    int year;
    printf("enter year that you check leap year or not : ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d is not leap year", year);
    }

    return 0;
}