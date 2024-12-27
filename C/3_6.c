#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
void prime(int n);
void evenodd(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, factorial(n));
    prime(n);
    evenodd(n);

    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)

    {
        return 1;
    }
    int fact = n * factorial(n - 1);
    return fact;
}

void prime(int n)
{
    int check = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
}

void evenodd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is a even number", n);
    }
    else
    {
        printf("%d is a odd number", n);
    }
}