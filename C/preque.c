#include <stdio.h>
#include <math.h>

void generateBitStrings(int n)
{
    int total = (int)pow(2, n); // Total number of bit strings is 2^n
    for (int i = 0; i < total; i++)
    {
        // Print the ith bit string
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d", (i >> j) & 1); // Extract the j-th bit
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the length of the bit string: ");
    scanf("%d", &n);

    printf("All %d-bit strings are:\n", n);
    generateBitStrings(n);

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     FILE *file = fopen("data.txt", "w"); // Open in write mode
//     if (file == NULL)
//     {
//         printf("Error opening file.\n");
//         return 1;
//     }
//     printf("File created successfully.\n");
//     fclose(file);
//     return 0;
// }
