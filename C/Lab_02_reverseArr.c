#include <stdio.h>

int main()
{
    int n = 4;

    int arr[] = {1, 2, 3, 4};
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}