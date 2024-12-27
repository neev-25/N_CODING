#include <bits/stdc++.h>

using namespace std;

int get_max_area(vector<int> a)
{
    int n = a.size(), ans = 0, i = 0;
    stack<int> st;
    a.push_back(0);
    while (i < n)
    {
        while (!st.empty() and a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                ans = max(ans, h * (i - st.top() - 1));
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << get_max_area(a);

    return 0;
}
// Calculating Area:

// When a[i] < a[st.top()], we pop the top of the stack to get the height of the rectangle.
// We then calculate the width of this rectangle:
// If the stack is empty after popping, it means the rectangle extends from the start of the histogram to the current index i.
// If the stack is not empty, the width is calculated as the difference between the current index i and the new top of the stack minus one: i - st.top() - 1.
// Example
// Let's go through a step-by-step example with the given histogram {2, 1, 5, 6, 2, 3}:

// Initialize st as an empty stack and add a 0 at the end of the histogram to get {2, 1, 5, 6, 2, 3, 0}.
// Iterate through the histogram:
// For i = 0, push 0 onto the stack: st = {0}.
// For i = 1, a[1] < a[0] (1 < 2), pop 0, calculate area a[0] * 1 = 2, push 1: st = {1}.
// For i = 2, push 2: st = {1, 2}.
// For i = 3, push 3: st = {1, 2, 3}.
// For i = 4, a[4] < a[3] (2 < 6), pop 3, calculate area a[3] * 1 = 6, pop 2, calculate area a[2] * (4 - 1 - 1) = 10, push 4: st = {1, 4}.
// For i = 5, push 5: st = {1, 4, 5}.
// For i = 6 (extra 0), a[6] < a[5] (0 < 3), pop 5, calculate area a[5] * 1 = 3, pop 4, calculate area a[4] * (6 - 1 - 1) = 8, pop 1, calculate area a[1] * (6 - 0 - 1) = 5: st = {6}.
// After all iterations, the maximum area found is 10.
