// #include <stdio.h>
// int countLen(char word[]);

// int main()
// {
//     int hm;
//     scanf("%d", &hm);
//     for (int i = 0; i < hm; i++)
//     {
//         char word[100];
//         scanf("%s", word);

//         int n = countLen(word);
//         int cnt = 1;
//         if (n > 10)
//         {
//             printf("%c", word[0]);

//             int cnt = n - 2;
//             printf("%d", cnt);

//             printf("%c", word[n - 1]);
//         }

//         if (n >= 1 && n <= 10)
//         {
//             printf("%s", word);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int countLen(char word[])
// {
//     int count = 0;
//     for (int i = 0; word[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a, b;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &a, &b);
//         int x = gcd(a, b);
//         if ((a / x) != (b / x))
//         {
//             printf("%d", (a / x) * (b / x));
//         }
//         else
//         {
//             printf("%d", x);
//         }
//         printf("\n");
//     }
// }
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return 0;
//     }
//     while (b != 0)
//     {
//         int temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return a;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     while (n != 0)
//     {
//         int m;
//         scanf("%d", &m);

//         int arr[m];
//         int cnt = 0;
//         for (int i = 0; i < m; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         for (int i = 0; i < m; i++)
//         {

//             if (arr[i] != arr[i - 1])
//             {
//                 cnt++;
//             }
//         }
//         printf("%d\n", cnt);
//         n--;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a = 1;
//         int b = 2;
//         int totalhour;
//         int arr1[2];
//         int arr2[2];
//         for (int i = 0; i < 2; i++)
//         {
//         }
//         scanf("%d", &totalhour);
//         int p = totalhour / a;
//         int q = totalhour / b;
//     }
// }
// #include <stdio.h>
// void increment()
// {
//     int i = 1;
//     printf("%d", i);
//     i = i + 1;
// }
// int main()
// {
//     increment();
//     increment();
//     increment();
// }

/*
[ ] ( ) ++ postfixn  --(postfix)
+ - ! ++ pre -- pre
* / %
< <= > >=
== !=
&&
||
?:
= += -= *= /= %=
,
*/
// #include <stdio.h>

// int main()
// {
//     int i = 0;

//     for (i = 0; i < 20; ++i)
//     {
//         switch (i)
//         {
//         case 0:
//             i += 3;

//         case 1:
//             i += 2;
//             break;
//         case 5:
//             i += 6;

//         default:
//             i += 4;
//             break;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i < 10; i++)
//     {
//         for (int j = 1; j < 10; j++)
//         {
//             for (int k = 1; k < 10; k++)
//             {
//                 if (i != j && j != k)
//                 {
//                     if (i == k)
//                     {
//                         printf("%d,%d,%d\n", i, j, k);
//                     }
//                 }
//             }
//         }
//     }
// }
#include <stdio.h>
int main()
{
    int a = 0;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 0; i <= 6; i++)
        {
            a = a + (i * i) * (j * j * j);
        }
    }
    printf("%d", a);
}