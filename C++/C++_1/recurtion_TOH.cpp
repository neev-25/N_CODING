#include <bits/stdc++.h>

using namespace std;
void towerofhanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerofhanoi(n - 1, src, helper, dest);
    cout << "move from " << src << "to" << dest << endl;
    towerofhanoi(n - 1, helper, dest, src);
}

int main()
{
    towerofhanoi(3, 'a', 'c', 'b');

    return 0;
}
// watch video of apna collage 1 shot