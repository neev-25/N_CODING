
#include <bits/stdc++.h>

using namespace std;
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
    // return (n & ~(1 << pos));  use for upper^
}
int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
int main()
{
    cout << getbit(5, 2) << endl;
    cout << setbit(5, 1) << endl;
    cout << clearbit(5, 2) << endl;
    cout << updatebit(5, 1, 1) << endl;
    return 0;
}
// getnit used in any pos of bit 0 or 1
// setbit set a bit any pos that you give
// clearbit clear a bit any pos that you give