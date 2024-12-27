#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "A" << endl;
    }
};
class B : public A
{
public:
    void Bfunc()
    {
        cout << "B" << endl;
    }
};
class C : public B
{
public:
    void Cfunc()
    {
        cout << "C" << endl;
    }
};
int main()
{

    C c;
    c.Afunc();
    c.Bfunc();
    c.Cfunc();

    return 0;
}