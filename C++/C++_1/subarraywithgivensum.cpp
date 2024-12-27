#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}
// that is st and en  to the -1;
// for tc 1 sum karta jao paachi sum vadhe
// tyare a[i] badd karo haji vadhare to haji i++
// kari ne a[i] baad karo pachhi jo thai jai to
// sum==s so j chele 7 hoi to 4 and i jya hot tya 2
