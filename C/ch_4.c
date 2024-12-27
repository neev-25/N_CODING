#include <stdio.h>

int main()
{
    printf("hello neev\n");
    // printf("hello world\n");
    // printf("hello world\n");
    // printf("hello world\n");
    // printf("hello world\n");
    // printf("hello world\n");
    // for (int i = 0; i <= 5; i++)
    // {
    //     printf("hello world\n");
    // }

    // for (int i = 0; i <= 100; i++)
    // {
    //     printf("%d\n", i);
    // }
    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }

    // for (float i = 0; i <= 5; i++)
    // {
    //     printf("%f\n", i);
    // }

    // for (char ch = 'a'; ch <= 'z'; ch++)
    // {
    //     printf("%c\n", ch);
    // }

    // infinite loop in a don't give condition i<=any

    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("hello world\n");
    //     i++;
    // }

    // int n;
    // printf("enter your number : ");
    // scanf("%d", &n);
    // int i = 0;
    // while (i <= n)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // int i = 5; // i=1;
    // do
    // {
    //     printf("%d", i);
    //     i--; // i++;
    // } while (i >= 1); // i<=5;

    // int n;
    // int sum = 0;
    // printf("enter your number : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("%d", sum);
    // for (int i = n; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }

    // int n;
    // printf("enter your number : ");
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    // {
    //     sum = sum + i;
    //     printf("%d\n", j);
    // }
    // printf("sum is %d\n", sum);

    // int n;
    // printf("enter number : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", n * i);
    // }

    // for (int i = 0; i <= 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     printf("%d\n", i);
    // }
    // printf("end");

    // int n;
    // do
    // {
    //     printf("enter your number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if (n % 2 != 0)
    //     {
    //         break;
    //     }
    // } while (1);

    // int n;
    // do
    // {
    //     printf("enter number : ");
    //     scanf("%d", &n);
    //     printf("%d", n);
    //     if (n % 7 == 0)
    //     {
    //         break;
    //     }

    // } while (1);
    // printf("thank you");

    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i == 6)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);
    // } // contineue use to skip of if in and go after

    // for (int i = 5; i <= 50; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // } // for odd number

    // int n;
    // printf("enter number : ");
    // scanf("%d", &n);
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // printf("%d\n", fact);

    // int n;
    // printf("enter number  :");
    // scanf("%d", &n);
    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d\n", n * i);
    // }

    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("sum is %d", sum);
    return 0;
}