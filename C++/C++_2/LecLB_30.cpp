#include <bits/stdc++.h>
using namespace std;

#define PI 3.14

// int score = 15;

// // void fir(int &i)
// // {
// //     cout << i << endl;
// //      sec(i); // so this not acess by the functionn so we need global variable
// // }
// // void sec(int &i)
// // {

// //      cout << i << endl;
// // }
// void secg(int &i)
// {
//     cout << score << endl;
// }

// void firg(int &i)
// {
//     cout << score << endl;
//     secg(i); // so this not acess by the functionn so we need global variable
// }
// // void secg(int &i)
// // {
// //     cout << score << endl;
// // }//this is my mistake beacause always when we fun in other function call so that function is frist write then call it up

// int main()
// {
//     // macro use
//     // int r = 5;
//     // double area = PI * r * r;
//     // cout << "Area of circle is " << area << endl;

//     // global variable
//     // int i = 10;
//     // fir(i);
//     // {
//     //     int i = 5;         // here guve 5
//     //     cout << i << endl; // example of local variable
//     // }
//     // cout << i << endl; // here give 10
//     cout << score << endl;
//     int i = 5;
//     firg(i);
//     secg(i);

//     return 0;
// }

void func(int a, int b)
{
    a++;
    b++;
    cout << a << " " << b << endl;
}
inline getmax(int &a, int &b)
{
    return (a > b) ? a : b;
    // in the inline func this repace getmax to (a > b) ? a : b;
    // if the bodyline 1 so excute it
    // if thre bodyline 1 to 2 so any change excute or not
    // if the bodyline >3 so not excute this
    // not extra memory uses and no func call over here
}
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // default argument
    //  this is mean that if we not pass any argument in ->main
    //  func so we ntilize in func so if we pass so get it
    //  other wise take that we intilize and then process
    // but note that always from right most means last parameter
    // you not write it become a  print(int arr[], int n=0, int start)
}
int main()
{
    // int a = 5;
    // int b = 5;
    // func(a, b);
    // cout << a << " " << b << endl;

    // int x = 6;
    // int y = 2;
    // int ans = 0;
    // if (x > y)
    // {
    //     ans = x;
    // }
    // else
    // {
    //     ans = y;
    // }
    // cout << ans << endl; // this is not insingle line so we use ternairy oprator
    // ans = (x > y) ? x : y;
    // cout << ans << endl;
    // x = x + 2;
    // y = y + 1;
    // ans = (x > y) ? x : y;
    // cout << ans << endl;//this improve readibilty and simplicity after that we use inline funtion

    // int ans = 0;
    // int a = 1;
    // int b = 2;
    // ans = getmax(a, b);
    // cout << ans << endl;
    // a = a + 3;
    // b = b + 1;
    // ans = getmax(a, b);
    // cout << ans << endl;//inline

    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr, size);
    cout << endl;
    print(arr, size, 2);
}