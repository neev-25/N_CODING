#include <bits/stdc++.h>
using namespace std;

int toh(int n, char source, char helper, char destination)
{

    int ans = 0;
    if (n == 0)
    {
        return ans;
    }
    ans = toh(n - 1, source, destination, helper);
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    ans = ans + toh(n - 1, helper, source, destination);
}

int main()
{
    int n;
    cin >> n;
    cout << toh(n, 'A', 'B', 'C');

    return 0;
}