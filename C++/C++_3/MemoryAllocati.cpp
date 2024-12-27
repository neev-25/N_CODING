#include <bits/stdc++.h>

using namespace std;

int main()
{

    // MEMORY ALLOCATION IN 1D TYPE

    // int *ptr = new int;   // allocate memory
    // *ptr = 5;             // value assign
    // cout << ptr << endl;  // adress
    // cout << *ptr << endl; // valeu
    // float *ptr2 = new float;
    // *ptr2 = 3.6;
    // cout << *ptr2 << endl;
    // int n;
    // cin >> n;
    // int *p = new int[n];
    // // input the valuw
    // for (int i = 0; i < n; i++)
    // {
    //     p[i] = i + 1;
    // }
    // // print the value
    // for (int i = 0; i < n; i++)
    // {
    //     cout << p[i] << endl;
    // }
    // // delete keyword use
    // delete ptr;
    // delete ptr2;
    // delete[] p;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // DYNAMIC MEMORY ALLOCATION

    // 2D array
    //  int n, m;
    //  cin >> n >> m;
    //  int **ptr = new int *[n];
    //  // created 2Darray
    //  for (int i = 0; i < n; i++)
    //  {
    //      ptr[i] = new int[m];
    //  }
    //  // input the value
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < m; j++)
    //      {
    //          cin >> ptr[i][j];
    //      }
    //  }
    //  // print the value
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < m; j++)
    //      {
    //          cout << ptr[i][j] << " ";
    //      }
    //      cout << endl;
    //  }
    //  // delete memory
    //  for (int i = 0; i < n; i++)
    //  {
    //      delete[] ptr[i];
    //  }
    //  delete[] ptr;

    // 3D array
    int L, B, H;
    cin >> L >> B >> H;
    int ***ptr = new int **[L];
    for (int i = 0; i < L; i++)
    {
        // creted 2d in
        ptr[i] = new int *[B];
        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }
    // input the value
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                // cin >> ptr[i][j][k];
                ptr[i][j][k] = i + j + k;
            }
        }
    }
    // print value
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cout << " " << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    // delete array
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}