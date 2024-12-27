#include <bits/stdc++.h>

using namespace std;

float convert(float x)
{
    return pow(2.71828, -x * x);
}
int main()
{
    float lowerlimit;
    cin >> lowerlimit;
    float upperlimit;
    cin >> upperlimit;
    float dx = 0.0000001;
    float ans = 0;
    while (lowerlimit != upperlimit)
    {
        ans = ans + convert(lowerlimit) * dx;
        lowerlimit = lowerlimit + dx;
    }
    cout << ans << endl;
    return 0;
}
