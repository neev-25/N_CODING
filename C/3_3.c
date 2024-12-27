#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 1;
    for (int i = 1; i < n / 2; i++)
    {
        for (int j = 1; j <= n / 2 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}