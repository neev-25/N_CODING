#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int unique(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i); // 2 poaitions uper 1 set karavi che
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << unique(arr, 10) << endl;

    return 0;
}
// 64 bits ni banavi
// pachi jya 0 pos uper jeni 1 hoi teni to tene 64
// vala array ma 0 idx upper te ketla che ava te nakhvo nu
// ex 3 pachhi 1 pos per 1 ketla tene 64 vali na idx 1 ma nakho
// ex 6 aam pacchi 4 javab avi jai
// pachi je sum ledhao eni %3 kari ne ulto karo atle 100 ave je 4 che
