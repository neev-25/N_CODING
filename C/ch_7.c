#include <stdio.h>

// void printNumbers(int arr[], int n);
// int countodd(int arr[], int n);

// int reverse(int arr[], int n);
// void printarr(int arr[], int n);

void storetable(int arr[][10], int n, int m, int number);

int main()
{
    // int mark1 = 90;
    // int mark2 = 80;
    // int mark3 = 70;

    // int marks[3];
    // printf("enter your mark1 : ");
    // scanf("%d", &marks[0]);
    // printf("enter your mark2 : ");
    // scanf("%d", &marks[1]);
    // printf("enter your mark3 : ");
    // scanf("%d", &marks[2]); // printf("%d",&marks[3])..this is invlaid
    // printf("phy = %d,chem=%d,math=%d", marks[0], marks[1], marks[2]);

    // float price[3];
    // // float price[3] = {100.0, 200.0, 300.0};
    // // float price[]={100.0,200.0,300.0};
    // printf("enter your price1 : ");
    // scanf("%f/n", &price[0]);
    // printf("enter your price2 : ");
    // scanf("%f\n", &price[1]);
    // printf("enter your price3 : ");
    // scanf("%f\n", &price[2]);
    // printf("total price 1 with gst : %f\n", price[0] + (0.18 * price[0]));
    // printf("total price 2 with gst : %f\n", price[1] + (0.18 * price[1]));
    // printf("total price 3 with gst : %f\n", price[2] + (0.18 * price[2]));

    // int age = 18;
    // int *ptr = &age;
    // printf("%u\n", ptr);
    // ptr++;
    // printf("%u\n", ptr); // this is contain 4 byte diff
    // ptr--;
    // printf("%u\n", ptr); // this is contain 4 byte diff

    // char star = '*';
    // char *ptr = &star;
    // printf("%u\n", ptr);
    // ptr++;
    // printf("%u\n", ptr); // this is contain 1 byte diff
    // ptr--;
    // printf("%u\n", ptr); // this is contain 1 byte diff

    // int age = 17;
    // int _age = 18;
    // int *ptr = &age; // if char use over a int so it give error
    // int *_ptr = &_age;
    // printf("difference = %u\n", ptr - _ptr);
    // printf("%u,%u differnece = %u\n", ptr, _ptr, ptr - _ptr);
    // //_ptr = &age;
    // printf("comparison = %u\n", ptr == _ptr);

    // int aadhar[5];
    // int *ptr = &aadhar[0]; //**araray ka first element pointer hota hai
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("% d index:", i);
    //     // scanf("%d", (ptr + i));
    //     scanf("%d", &aadhar[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     // printf("%d index = %d\n", i, *(ptr + i));
    //     printf("%d index = %d \n", i, aadhar[i]);
    // }

    // int arr[] = {1, 2, 4, 5, 6};
    // printNumbers(arr, 5); // or (*arr,5)

    // 2 stu*3sub;
    // int marks[2][3];
    // marks[0][0] = 90;
    // marks[0][1] = 97;
    // marks[0][2] = 89;
    // marks[1][0] = 98;
    // marks[1][1] = 87;
    // marks[1][2] = 92;
    // printf("%d", marks[0][0]);
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", marks[i][j]);
    //     }
    // }

    // int arr[] = {1, 2, 3, 4, 5, 6};
    // printf("%d", countodd(arr, 6));

    // int arr[] = {1, 2, 3, 4, 5};
    // printf("%d\n", *(arr + 2));
    // printf("%d\n", *(arr + 5));

    // int arr[] = {1, 2, 3, 4, 5};
    // reverse(arr, 5);
    // printarr(arr, 5);

    // int n;
    // printf("enter n (n>2) : ");
    // scanf("%d", &n);
    // int fib[n];
    // fib[0] = 0;
    // fib[1] = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     fib[i] = fib[i - 1] + fib[i - 2];
    //     printf("%d\t", fib[i]);
    // }
    // printf("\n");

    int tables[2][10];
    storetable(tables, 0, 10, 2);
    storetable(tables, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storetable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

// int reverse(int arr[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int firstval = arr[i];
//         int secondval = arr[n - i - 1];
//         arr[i] = secondval;
//         arr[n - i - 1] = firstval;
//     }
// }
// void printarr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int countodd(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// void printNumbers(int arr[], int n) // or *arr[]
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \t", arr[i]); // \t is use for large space
//     }
//     printf("\n");
// }