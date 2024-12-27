#include <bits/stdc++.h>

using namespace std;
void primeSieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}
// this is a first 100 number 2darr ma 0n nakho
// pachhi tena sqaure thi lai ne jump i jetlo jj karavi
// ne tena 1 mark karavo
// pacchi chele jetla 0 vadhe tne prime kehvay