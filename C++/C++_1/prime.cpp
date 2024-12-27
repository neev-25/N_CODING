#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "non prime" << endl;
            break;
        }
    }
    if (i == n) // this if for for(i=2;i<=n;i++)
    {
        cout << "prime" << endl;
    }
    return 0;
}
//