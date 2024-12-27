#include <bits/stdc++.h>

using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (newxor ^ tempxor) << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    unique(arr, 8);
    return 0;
}
// pela badho no xor tethi 7 ane 5 no xor mle
// pachhi jema 7 ane 5 na xor sum ni jem jeno right most setbit hoi
// teni jeva mate no xorsum karavi jethi ek mli jai
// pachhi teno badha na xor sathe xor karavi atle bijo mle
