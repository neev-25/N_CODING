#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pocketmoney = 3001;
    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketmoney == 0)
        {
            break;
        }

        cout << "go out today!" << endl;
        pocketmoney = pocketmoney - 3000;
    }

    return 0;
}

// 3000 / 300 = 10
//