#include <bits/stdc++.h>

using namespace std;
int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i + 1, key);
}
// in first ocuurence in first check after call

int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restarray = lastocc(arr, n, i + 1, key);
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
// int last occurce in first call after check
// so this poiter go to starting form last
// and give a last occurnce

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstocc(arr, 7, 0, 2) << endl;
    cout << lastocc(arr, 7, 0, 2) << endl;

    return 0;
}
// this is recursion