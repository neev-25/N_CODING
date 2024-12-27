#include <stdio.h>

int main()
{
    int n;
    printf("enter your number that you can get that number factor : ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}