#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ramanujan(int n, int key);

int main()
{
    int n, key;
    printf("Enter number  :  ");
    scanf("%d", &n);
    printf("Enter key : ");
    scanf("%d", &key);
    ramanujan(n, key);

    return 0;
}

void ramanujan(int n, int key)
{
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (pow(i, 3) + pow(j, 3) == key)
            {
                // printf("(%d,%d) ", i, j);
                printf("%d^%d\n", i, j);
                check = 1;
            }
        }
    }
    if (check)
    {
        printf("ramanujan number\n");
    }
    else
    {
        printf("not ramanujan number\n");
    }
}
