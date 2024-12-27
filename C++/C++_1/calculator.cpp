#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2;
    cout << "input 2 numbers:";
    cin >> n1 >> n2;
    char op;
    cout << "input an oprator :";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    case '%':
        cout << n1 % n2 << endl;
        break;

    default:
        cout << "enter another oprator";
        break;
    }

    return 0;
}
//