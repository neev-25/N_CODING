#include <bits/stdc++.h>

using namespace std;

class apnacollage
{
public:
    void fun()
    {
        cout << "i am a function with no arguments" << endl;
    }
    void fun(int x)
    {
        cout << "i am a function with int argument" << endl;
    }
    void fun(double x)
    {
        cout << "i am a function with double argument" << endl;
    }
};

int main()
{
    apnacollage obj;
    obj.fun();
    obj.fun(10);
    obj.fun(10.5);

    return 0;
}