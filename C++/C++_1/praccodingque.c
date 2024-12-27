// #include <stdio.h>

// void printDoubleRectangle(int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             // Print * for the border or the double rectangle regions
//             if (i == 0 || i == size - 1 || j == 0 || j == size - 1 || (i >= size / 4 && i < size * 3 / 4 && (j == size / 4 || j == size * 3 / 4)))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  "); // Print space inside
//             }
//         }
//         printf("\n"); // Move to the next line
//     }
// }

// int main()
// {
//     int size;
//     printf("Enter the size of the rectangle (even number): ");
//     scanf("%d", &size);

//     if (size < 6 || size % 2 != 0)
//     {
//         printf("Please enter an even number greater than or equal to 6.\n");
//         return 1;
//     }

//     printDoubleRectangle(size);

//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int a[] = {0, 1, 0, 1, 1};
    int b[] = {0, 1, 1, 1, 1};
    int c[100] = {0};
    for (int j = 0; j < 5; j++)
    {
        if (b[j] == 1)
        {
            c[j] = a[j];
        }
    }
    int p = 0;

    for (int j = 0; j < 5; j++)
    {
        char ch = c[j] + '0';
        printf("%c", ch);
        p = p + c[j];
    }
    printf("\n");
    printf("%d", p);
}