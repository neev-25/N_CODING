#include <bits/stdc++.h>

using namespace std;

void funr(int n)
{
    if (n == 0)
    {
        cout << "happy birthday" << endl;
        return;
    }
    cout << n << " " << "days left for birthday" << endl;
    funr(n - 1);
}
void print(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    // cout << n << endl; // first print and then call it//1 2 3 4 5
    print(n - 1);
    cout << n << endl; // first call and then print//5 4 3 2 1
}

void print1ToN(int num, int n)
{
    if (num == n)
    {
        cout << num << endl;
        return;
    }
    cout << num << endl;

    print1ToN(num + 1, n);
}
void print1ToN2(int num)
{
    if (num == 0)
    {
        return;
    }
    print1ToN2(num - 1);
    cout << num << endl;
}
void printEven(int n)
{
    if (n == 0)
    {
        // cout << 0 << endl;
        return;
    }
    printEven(n - 1);
    if (n % 2 == 0)
    {
        cout << n << endl;
    }
}
int fact(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int sumOfN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfN(n - 1);
}
int powOf2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * powOf2(n - 1);
}
int sqauresumOFN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * n + sqauresumOFN(n - 1);
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int Nthstair(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return Nthstair(n - 1) + Nthstair(n - 2);
}
void printarr(int arr[], int index, int n)
{
    if (index == n)
    {
        return;
    }
    cout << arr[index] << " ";
    printarr(arr, index + 1, n);
    // cout << arr[index] << " ";
}
int sumofarr(int arr[], int index, int n)
{
    if (index == n)
    {
        return 0;
    }
    return arr[index] + sumofarr(arr, index + 1, n);
}
int minele(int arr[], int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return min(arr[index], minele(arr, index + 1, n));
}
int maxele(int arr[], int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return max(arr[index], maxele(arr, index + 1, n));
}
int checkpalindrome(string s, int st, int en)
{
    if (st >= en)
    {
        return 1;
    }
    if (s[st] != s[en])
    {
        return 0;
    }
    return checkpalindrome(s, st + 1, en - 1);
}
int checkHvowels(string s, int index)
{
    if (index == -1)
    {
        return 0;
    }
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
    {
        return 1 + checkHvowels(s, index - 1);
    }
    return checkHvowels(s, index - 1);
}
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);

    cout << s[0];
}
void rev(string &str, int st, int en)
{
    if (st >= en)
    {
        return;
    }
    char c = str[st];
    str[st] = str[en];
    str[en] = c;
    rev(str, st + 1, en - 1);
}
void lowtoupp(string &s, int index)
{
    if (index == -1)
    {
        return;
    }
    s[index] = s[index] - 'a' + 'A';
    lowtoupp(s, index - 1);
}
void upptolow(string &s, int index)
{
    if (index == -1)
    {
        return;
    }
    s[index] = s[index] + 'a' - 'A';
    upptolow(s, index - 1);
}
int linearsearch(int arr[], int key, int index)
{
    if (index == -1)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }
    linearsearch(arr, key, index - 1);
}
int binaryresearch(int arr[], int key, int st, int en)
{
    int mid = st + (en - st) / 2;
    if (st > en)
    {
        return -1;
    }
    if (arr[mid] < key)
    {
        binaryresearch(arr, key, mid + 1, en);
    }
    else if (arr[mid] > key)
    {
        binaryresearch(arr, key, st, mid - 1);
    }
    else
    {
        return mid;
    }
}

int main()
{

    int n = 4;
    // funr(n);
    // print(n);
    // print1ToN(1, n);
    // print1ToN2(n); // this is function is same understand all calls recursivly
    // printEven(n); // till to n even number
    // cout << fact(n);
    // cout << sumOfN(n);
    // cout << powOf2(n);
    // cout << sqauresumOFN(n);
    // cout << fibonacci(n);
    // cout << Nthstair(n);
    // int arr[] = {1, 2, 3, 4, 5};
    // printarr(arr, 0, n);
    // int arr[] = {3, 4, 5, 8, 2};
    // cout << sumofarr(arr, 0, n);
    // int arr[] = {7, 3, 4, 10, 6};
    // cout << minele(arr, 0, n) << " ";
    // cout << maxele(arr, 0, n) << " ";
    // string s = "racecar";
    // cout << checkpalindrome(s, 0, s.length() - 1);
    // string s = "bharatbhai";
    // cout << checkHvowels(s, s.length() - 1);
    // string s = "veen";
    // reverse(s);
    // string str = "rohit";
    // rev(str, 0, str.length() - 1);
    // cout << str << endl;
    // string str = "neev";
    // lowtoupp(str, str.length() - 1);
    // cout << str << endl;
    // string str = "ANSH";
    // upptolow(str, str.length() - 1);
    // cout << str << endl;
    // int arr[] = {3, 238, 183124, 182, 8248, 32772};
    // int key = 183124;
    // int index = 5;
    // cout << linearsearch(arr, key, index);
    // int arr[] = {3, 8, 11, 15, 20, 22};
    // int key = 15;
    // int st = 0;
    // int en = 5;
    // cout << binaryresearch(arr, key, st, en);

    return 0;
}