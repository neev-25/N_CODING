#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;
    do
    {
        int lastdigit = n % 10;
        n /= 10;
        sum += pow(lastdigit, 3);
        // cout << sum << endl;
    } while (n > 0);

    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}
//