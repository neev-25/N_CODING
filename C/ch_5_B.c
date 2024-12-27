#include <stdio.h>

// void printHW(int count);
// int sum(int n);
// int fact(n);
int fib(int n);

int main()
{
    // printHW(5);

    // printf("sum is %d", sum(5));

    // printf("fact is %d", fact(5));
    printf("fib is %d", fib(6));

    return 0;
}
int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    // printf("fabonacci of %d is equal to : %d", n, fibN);
    return fibN;
}

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     int factNm1 = fact(n - 1);
//     return n * factNm1;
// }

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     int sumN = sum(n - 1);
//     int sum = sumN + n;
//     return sum;
// }

// void printHW(int count) // recursion
// {
//     if (count == 0)
//     {
//         return;
//     }
//     printf("Hello world\n");
//     printHW(count - 1);
// }