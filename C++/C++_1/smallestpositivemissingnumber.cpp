#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e5 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
// arr[]banaco pachi check[N] noarr banavo
// pachi a[i]>0 mate true mark karovo pan
// jetlo a[i] tetli index hoi teme ex a[i]=1 to chack[1] ma true mark karavao
// check[i] false aayo to ans=i