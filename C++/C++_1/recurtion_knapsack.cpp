#include <bits/stdc++.h>

using namespace std;
int knapsack(int value[], int wt[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return knapsack(value, wt, n - 1, w);
    }
    return max(knapsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, w));
}

int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int w = 50;
    cout << knapsack(value, wt, 3, w) << endl;

    return 0;
}
// the at is problem that is a weight any but not higher then capacity
// and a value become maximum so we recurtion call and
// we check if the weight is higher then capacity then we skip it
// else we take the max of the value of the current item and the value of the item without
// the current item
