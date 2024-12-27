#include <stdio.h>

int main()
{
    int i, j;
    int n;
    scanf("%d", &n); // the number of rows in the pattern

    // Loop to print the upper part of the pattern
    for (i = 0; i < n / 2 + 1; i++)
    {
        // Print spaces
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < n - 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Loop to print the lower part of the pattern
    for (i = n / 2 - 1; i >= 0; i--)
    {
        // Print spaces
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < n - 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
