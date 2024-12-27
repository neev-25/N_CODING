#include <stdio.h>

// void squre(int n);
// void _squre(int *n);
// void swap(int a, int b);
// void _swap(int *a, int *b);
// void printadress(int n);
// void _printadress(int *n);
void dowork(int a, int b, int *sum, int *product, int *avg);

int main()
{
    printf("hello neev\n");
    // int *ptr;
    // char *ptr;
    // float *ptr;
    // int age = 18;
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d", _age);

    // printf("%p\n", &age);

    // this is a adress store

    // printf("%u\n", &age);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);
    // this is a adress store

    // value
    // int age = 18;
    // int *ptr = &age;
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    // int x;
    // int *ptr;
    // ptr = &x;
    // *ptr = 0;
    // printf("x = %d\n", x);
    // printf("*ptr =%d\n", *ptr);
    // *ptr += 5;
    // printf("x =%d\n", x);
    // printf("*ptr =%d\n", *ptr);
    // (*ptr)++;
    // printf("x =%d\n", x);
    // printf("*ptr is a %d\n", *ptr);

    // pptr
    //  int **pptr;
    //  char **pptr;
    //  float **pptr;
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;
    // printf("%d\n", **pptr);

    // int number = 5;
    // squre(number);
    // printf("number = %d", number);

    // _squre(&number);
    // printf("number = %d", number);

    // int x = 5;
    // int y = 7;
    // _swap(&x, &y);
    // printf("x = %d\n", x);
    // printf("y = %d\n", y);

    // int n = 4;
    // _printadress(&n);
    // printf("adress of n is : %u\n", &n);

    int a = 3;
    int b = 8;
    int sum, product, avg;
    dowork(a, b, &sum, &product, &avg);

    return 0;
}

void dowork(int a, int b, int *sum, int *product, int *avg)
{
    *sum = a + b;
    *product = a * b;
    *avg = (a + b) / 2;
    printf("sum=%d,product=%d,avg=%d\n", *sum, *product, *avg);
}

// void _printadress(int *n)
// {
//     printf("adress of n is : %u\n", n);
// }

// void _swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("a = %d and b = %d", *a, *b);
// }

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("now a is %d and b is %d", a, b);
// }

// void squre(int n)
// {
//     n = n * n;
//     printf("squre is the %d ", n);
// }

// void _squre(int *n)
// {
//     *n = (*n) * (*n);
//     printf("squre is the %d ", *n);
// }