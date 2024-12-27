#include <bits/stdc++.h>

using namespace std;

int main()
{

    // int num = 5;
    // cout << num << endl;
    // cout << "adressof num->" << &num << endl;
    // cout << "valueof num->" << *(&num) << endl;
    // int *ptr = &num;
    // cout << "adress stored in ptr is " << ptr << endl;
    // cout << "value is which store adress that value " << *ptr << endl;
    // cout << "adress of pointer" << &ptr << endl;
    // cout << "adress of variable that adress stored into ptr" << ptr << &num << endl;

    // double d = 4.3;
    // double *p2 = &d;
    // cout << "value of d" << d << endl;
    // cout << "adress of d is " << &d << endl;
    // cout << "adress of p2 is " << &p2 << endl;
    // cout << "value is " << *p2 << endl;
    // cout << "size of int is " << sizeof(num) << endl;
    // cout << "size of pointer" << sizeof(ptr) << endl; // because this is a int
    // cout << "size of double is " << sizeof(d) << endl;
    // cout << "size of double pointer" << sizeof(p2) << endl;

    // int *p; // pointer to int is created ,and pointing to some garbadge address
    // cout << "adress of p is " << &p << endl;
    // cout << "value of p is " << *p << endl; // garbadge valeu
    // int i = 5;
    // int *q = &i;
    // cout << q << endl;
    // cout << *q << endl;
    // int *p1 = 0;
    // p1 = &i;
    // cout << p1 << endl;
    // cout << *p1 << endl;

    // int num = 5;
    // int a = num;
    // cout << "before" << num << endl;
    // a++;
    // cout << "after" << num << endl;
    // cout << a << endl;

    // int *p = &num;
    // cout << "before" << num << endl;
    // (*p)++;
    // cout << "after" << num << endl;

    // // copying a pointer
    // int *q = p;
    // cout << p << "_" << q << endl;
    // cout << *p << "_" << *q << endl;

    // // inportant concept
    // int i = 3;
    // int *t = &i;
    // *t = *t + 1;
    // cout << *t << endl;
    // cout << "befor t" << (int)t << endl; // here i use type casting because i know if i added one in pointer addrss so is increase by 4 size
    // t = t + 1;
    // cout << "after t" << (int)t << endl;

    // lec pointer 2

    // int arr[10] = {2, 5, 6};
    // cout << "adress of first memeory block is " << arr << endl;
    // cout << "adress of first memory block is " << &arr[0] << endl;
    // cout << arr[0] << endl;              // garbadge value
    // cout << "4th" << *arr << endl;       // 1th value print
    // cout << "5th" << *arr + 1 << endl;   // 1th value update
    // cout << "6th" << *(arr + 1) << endl; // plus adress then print value
    // cout << "7th" << *(arr) + 1 << endl; // update value
    // int arrr[10] = {23, 122, 41, 67};
    // cout << arrr[2] << endl;
    // cout << *(arrr + 2) << endl;
    // int i = 3;
    // cout << i[arrr] << endl;
    // cout << *(i + arr) << endl;
    // int temp[10];
    // cout << sizeof(temp) << endl;
    // cout << sizeof(*temp) << endl;
    // cout << sizeof(&temp) << endl;
    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;
    // int a[20] = {1, 2, 3, 4};
    // cout << &a[0] << endl;
    // cout << a << endl;
    // cout << " " << &a << endl;
    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    // int arr[10];
    // // arr = arr + 1;
    // // cout << arr << endl; // give the error
    // int *ptr = &arr[0];
    // cout << ptr << endl;
    // ptr = ptr + 1;
    // cout << ptr << endl;//difference is 4 because is int

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    string s = "abcde";
    cout << arr << endl;
    cout << ch << endl; // different implement
    cout << sizeof(ch) << endl;
    cout << s.size() << endl;
    char *c = &ch[0];
    cout << c << endl; // different implement
    char temp = 'z';
    char *p = &temp;   // mat karo
    cout << p << endl; // print until when find not find \0

    return 0;
}