#include <stdio.h>

int main()
{

    for (int i = 1; i <= 3; i++)
    {
        printf("%d", i);
        for (int j = 1; j <= 3; j++)
        {
            if (j != i)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    for (int i = 3; i >= 1; i--)
    {
        printf("%d", i);
        for (int j = 3; j >= 1; j--)
        {
            if (j != i)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
