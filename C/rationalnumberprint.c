#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d\n", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("%d/%d ", i, j);
        }
    }

    return 0;
}