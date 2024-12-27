#include <bits/stdc++.h>

using namespace std;

// void update(int **p2)
// {
//     // p2 = p2 + 1;
//     //  any change ??-No
//     //*p2 = *p2 + 1;
//     // any chaneg-Yes
//     //**p2 = **p2 + 1;
//     // any change
// }

// void updateval(int n)
// {
//     n++;
// }
// void updateref(int &n)
// {
//     n++;
// }
// int &func(int a)
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }
// int *fun(int n)
// {
//     int *ptr = &n;
//     return ptr;
// }
// int getSum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

int main()
{
    // int i = 5;
    // int *p = &i;
    // int **p2 = &p;
    // cout << "printing p ->" << p << endl;
    // cout << "printing p ->" << &p << endl;
    // cout << "printing p2 ->" << p2 << endl;
    // cout << "printing p2 ->" << &p2 << endl;
    // // same
    // cout << *p2 << endl;
    // cout << p << endl;
    // // acess i for all of this
    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;
    // // i tha adress
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;
    // // pointer tha adress
    // cout << &p << endl;
    // cout << p2 << endl;
    // change it
    // cout << "before" << i << endl;
    // cout << "before" << p << endl;
    // cout << "before" << p2 << endl;
    // update(p2);
    // cout << "after" << i << endl;
    // cout << "after" << p << endl;
    // cout << "after" << p2 << endl;

    // MCQ
    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first <<" "<<second<< endl;

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first << endl;
    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " ";
    // cout << first << endl;
    // // cout << (*p)++ << " " << first << endl;//this is depend on mehtod how to write it

    // reference variable
    // int i = 5;
    // int &j = i;
    // i++;
    // j++;
    // cout << i << " " << j << endl; // in value both cases perfrorm oprations
    // int n = 5;
    // cout << "before" << n << endl;
    // updateval(n);
    // cout << "after" << n << endl;
    // cout << "before" << n << endl;
    // updateref(n);
    // cout << "after" << n << endl;
    // cout << func(n);
    // cout << fun(n);

    // char ch = 'a';
    // cout << sizeof(ch) << endl;
    // char *c = &ch;
    // cout << sizeof(c) << endl;
    // int *arr = new int[5];
    // cout << sizeof(arr) << endl; // dynamic memory allocation
    // in this *arr size 4 byte in stack
    // in this arr size 20 byte in heap

    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int ans = getSum(arr, n);
    // cout << "answer is " << ans << endl;

    // dynamic allocation for 2d matrix
    // int row, col;
    // cin >> row >> col;
    // int **arr = new int *[row];
    // for (int i = 0; i < col; i++)
    // {
    //     arr[i] = new int[col];
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // homwwork of jaggered matrix 2D
    int row;
    cin >> row;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[i + 2];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (i + 2); j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
}