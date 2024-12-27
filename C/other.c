#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int max(int n, int m)
// {
//     if (n > m)
//     {
//         return n;
//     }
//     else
//     {
//         return m;
//     }
// }

// void total(int n, int arr[]);

// int main()
//{
//  int n;
//  int lastRandomNumber; // Use this variable to store the last random number

// // Seed the random number generator
// srand(time(NULL));

// // Read the number of iterations
// scanf("%d", &n);

// // Generate and print random numbers
// for (int i = 0; i < n; i++)
// {
//     lastRandomNumber = rand(); // Generate a random number
//     // Uncomment the following line if you want to see all generated numbers
//     // printf("%d\n", lastRandomNumber);
// }

// // Print the last generated random number
// printf("%d\n", lastRandomNumber);

// int n;
// scanf("%d", &n);
// int arr[n];
// for (int i = 0; i < 6; i++)
// {
//     scanf("%d", &arr[i]);
// }
// total(n, arr);

// int a;
// scanf("%d", &a);
// int b;
// scanf("%d", &b);
// int sum = 0;
// for (int i = 1; i <= b; i++)
// {
//     sum += a;
// }
// printf("%d", sum);

// float a = 2.3;
// // scanf("%f", &a);
// float b = 1.4;
// // scanf("%f", &b);
// float sum = 0;
// // for (int i = 1; i <= 10; i++)
// // {
// //     b += 1.4;
// //     a += 2.3;
// // }
// // printf("%f", a);
// // printf("%f", b);
// for (int i = 1; i <= b * 10; i++)
// {
//     sum += a;
// }
// printf("%f", sum / 100);

// return 0;
// void update(int *a, int *b);

// int main()
// {
//     int a, b, sum, diff;
//     int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", sum, diff);

//     return 0;
// }

// void update(int *a, int *b)
// {
//     // Complete this function
//     int sum, diff;
//     sum = *a + *b;
//     diff = *a - *b;
// }

//}

// void total(int n, int arr[])
// {
//     int totalsum = 0;
//     int maximum = 0;
//     int sum = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         int count = 1;
//         if (count == 2)
//         {
//             count = 0;
//             total(n, arr);
//         }
//         maximum = max(maximum, arr[i]);
//         count++;
//         sum = sum + maximum;
//     }
//     totalsum = totalsum + sum;
//     printf("%d\n", totalsum);
// }

// int main()
// {
//     int n, x, k = 1;
//     float y = 1, a, b = 0;
//     printf("enter the number");
//     scanf("%d", &n);
//     x = n - 1;
//     for (int i = 1; i <= x; i++)
//     {
//         y = y * x;
//         a = y * k / i;
//         k = -k;
//         b = b + a;
//     }
//     printf("%f", b);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n, k = 1;
//     float sum = 0.0, term;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     // Calculate x = (n - 1) / n, which is used in the series
//     float x = (float)(n - 1) / n;

//     // Taylor series expansion of ln(n) around n = 1
//     for (int i = 1; i <= 20; i++)
//     {                         // limiting to 20 terms for better convergence
//         term = pow(x, i) / i; // Calculate each term
//         if (i % 2 == 0)
//         {
//             sum -= term; // alternate sign for even terms
//         }
//         else
//         {
//             sum += term; // add for odd terms
//         }
//     }

//     // Output the result, which is an approximation of ln(n)
//     printf("Approximate value of ln(%d) is: %f\n", n, sum);
//     printf("Actual value of ln(%d) using math.h is: %f\n", n, log(n)); // Compare with actual log(n)

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ans = 100000;
//     int term = 1000;
//     for (int i = 1; i <= 10; i++)
//     {
//         term = ans + ans / 10;
//         ans = term;

//         printf("%d\n", term);
//     }
//
// }

// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z')
//     {
//         printf("this charater is in lower case");
//     }
//     else if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("this character is in upper case");
//     }
//     else
//     {
//         printf("invalid charcter");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int ch;

//     scanf("%d", &ch);
//     if (32 < ch < 47 || 58 < ch < 64 || 91 < ch < 96 || 123 < ch < 126)
//     {
//         printf("%c", ch);
//     }
//     else
//     {
//         printf("this character is a alphabet or number");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     float n;
//     float sum = 0.0;
//     scanf("%f", &n);
//     int i = 0;
//     while (sum <= n)
//     {
//         i++;
//         sum += 1.0 / i;
//     }
//     printf("%d", i);
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             for (int k = 1; k < n; k++)
//             {
//                 if (i * i + j * j == k * k)
//                 {
//                     printf("%d,%d,%d", i, j, k);
//                     printf("\n");
//                 }
//             }
//         }
//     }
// }

// #include <stdio.h>

// int printN(int n)
// {
//     while (n == 0)
//     {
//         return;
//     }
//     printN(n - 1);
//     printf("%d\n", n);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printN(n);
// }

// #include <stdio.h>

// // Function to check if a number is prime
// int isPrime(int x)
// {
//     if (x <= 1)
//         return 0; // 0 and 1 are not prime numbers
//     for (int i = 2; i * i <= x; i++)
//     {
//         if (x % i == 0)
//         {
//             return 0; // Not prime
//         }
//     }
//     return 1; // Prime
// }

// // Function to find two prime numbers whose sum equals n
// void SumToForwardPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i))
//         {                  // First prime number
//             int j = n - i; // Second prime number (n - i)
//             if (isPrime(j))
//             { // If both i and j are prime
//                 printf("%d + %d = %d\n", i, j, n);
//                 return; // Return after finding the first pair
//             }
//         }
//     }
//     printf("No prime pairs found\n"); // If no pair is found
// }

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n < 4)
//     {
//         printf("No prime pairs can sum up to %d (since the smallest sum of primes is 2 + 2 = 4).\n", n);
//     }
//     else
//     {
//         // Call the function to find the pair of primes whose sum is n
//         SumToForwardPrime(n);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             printf(" ");
//         }
//         printf("*");
//         for (int k = 0; k < 2 * i; k++)
//         {
//             printf(" ");
//         }
//         printf("*\n");
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             printf(" ");
//         }
//         printf("*");
//         for (int k = 0; k < 2 * i; k++)
//         {
//             printf(" ");
//         }
//         printf("*\n");
//     }
// }

// #include <stdio.h>

// int cntofdig(int n)
// {
//     int cnt = 0;
//     if (n == 0)
//     {
//         return;
//     }

//     n = n / 10;
//     cnt = cntofdig(n) + 1;
//     return cnt;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", cntofdig(n));
// }

// #include <stdio.h>
// int decimaltobinary(int n)
// {

//     if (n == 0)
//     {
//         return;
//     }

//     decimaltobinary(n / 2);
//     int rem = n % 2;
//     printf("%d", rem);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     decimaltobinary(n);
// }

// #include <stdio.h>
// void swap(char *a, char *b)
// {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     char name1[] = {"IT101"};
//     char name2[] = {"MA101"};

//     for (int i = 0; i < name1[i] != '\0'; i++)
//     {
//         swap(&name1[i], &name2[i]);
//     }
//     printf("%s %s\n", name1, name2);
// }
#include <stdio.h>
#define PI 3.14
int main()
{
    int r = 5;
    double area = PI * r * r;
    printf("Area of circle is : %lf ", area);
}