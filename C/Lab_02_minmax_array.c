#include <stdio.h>

int main()
{
    int arr[] = {2, 6, 3, 7, 8, 9};
    int maxno = -1176737;
    int minno = 1176737;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxno)
        {
            maxno = max(maxno, arr[i]);
        }
        printf("Maxno of array %d", maxno);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < minno)
        {
            minno = max(minno, arr[j]);
        }
        printf("Minno of array %d", minno);
    }
    return 0;
}
