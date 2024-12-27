#include <bits/stdc++.h>

using namespace std;

int main()
{

    char button;
    cout << "input a character:";
    cin >> button;
    // if (button == 'a')
    // {
    //     cout << "hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "namste" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "salut" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "hola" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "bonjour" << endl;
    // }
    // else
    // {

    //     cout << "i am still learing more";
    // }
    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "namste" << endl;
        break;
    case 'c':
        cout << "salut" << endl;
        break;
    case 'd':
        cout << "hola" << endl;
        break;
    case 'e':
        cout << "bonjour" << endl;
        break;
    default:
        cout << "i am still learing more";
        break;
    }

    return 0;
}
//