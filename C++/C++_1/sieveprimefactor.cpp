#include <bits/stdc++.h>

using namespace std;
void primefactor(int n)
{
    int spf[100];
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i) // this is main line j+=i
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}
// pela 20 aatle ano mark karvi didho
// pachhi 2 thi 20 suchi ma anano hoi ane mate
// pachhi 20 10 no hovathi n 10 nabi jai
// pachi ane mate 2 5 male jethi total
// javab 2 2 5 mle