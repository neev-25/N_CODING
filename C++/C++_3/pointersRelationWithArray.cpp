#include <bits/stdc++.h>

using namespace std;

void dob(int temp[])
{
    for (int i = 0; i < 5; i++)
    {
        temp[i] = temp[i] * 2;
    }
}
// void pass(vector<int> &temp)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         temp[i] = 20;
//     }
// }
// void swapref(int &p1, int &p2)
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
// }
// void swapping(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     cout << p1 << endl;
//     cout << p2 << endl;
//     cout << &p1 << endl;
//     cout << &p2 << endl;
// }

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // cout << arr << endl;
    // cout << arr + 0 << endl;
    // cout << &arr[0] << endl;
    // cout << ptr << endl;
    // cout << arr + 1 << endl;
    // cout << &arr[1] << endl;

    // cout << arr[0] << endl;
    // cout << *arr << endl;
    // cout << *(arr + 0) << endl;
    // cout << *ptr << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr + i << endl;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(arr + i) << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ptr[i] << " ";
    //     cout << endl;
    //     cout << ptr + i << endl;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *ptr << " ";
    //     ptr++;
    // }
    // ptr = ptr + 3;
    // cout << *ptr << endl;
    // ptr = ptr - 2;
    // cout << *ptr << endl;

    // charcter relative with array
    // char arr[5] = "1234";
    // char *ptr = arr;
    // cout << static_cast<void *>(arr) << endl;
    // cout << ptr << endl;
    // cout << arr << endl;
    // cout << (void *)arr << endl;
    // cout << (void *)ptr << endl;
    // char name = 'a';
    // cout << name << endl;
    // char *ptr1 = &name;
    // cout << ptr1 << endl;
    // cout << (void *)ptr1 << endl;

    // pass by pointer
    // int first = 10;
    // int second = 20;
    // swapping(&first, &second);
    // cout << first << " " << second << endl;
    // cout << &first << endl;
    // cout << &second << endl;

    // pass by reference
    // int first = 10;
    // int second = 29;
    // cout << first << " " << second << endl;
    // swapref(first, second);
    // cout << first << " " << second << endl;
    // int num = 10;
    // int &temp = num;
    // cout << temp << endl;
    // temp++;
    // cout << num << endl;
    // vector<int> v(5, 0);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // pass(v);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    dob(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}