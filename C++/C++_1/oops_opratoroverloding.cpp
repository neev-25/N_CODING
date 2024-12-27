// #include <bits/stdc++.h>

// using namespace std;
// class complex
// {
// private:
//     int real, imag;

// public:
//     complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }
//     complex oprator + (complex const &obj)
//     {
//         complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }
//     void display()
//     {
//         cout << real << " + i " << imag << endl;
//     }
// };

// int main()
// {
//     complex c1(3, 4), c2(5, 6);
//     complex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &obj) const
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() const
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(5, 6);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
