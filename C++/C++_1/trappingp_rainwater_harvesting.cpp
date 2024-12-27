#include <bits/stdc++.h>

using namespace std;

int rain_water(vector<int> a)
{
    stack<int> st;
    int n = a.size(), ans = 0;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int diff = i - st.top() - 1;
            ans += (min(a[st.top()], a[i]) - a[cur]) * diff;
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain_water(a);
    return 0;
}
// jo dabi valo nano hoi to tene pop kravo pachhi check nai
//  direct opration start

// Explanation for Each Element:
// Initialization:

// The stack st is initialized as empty.
// The variable ans is initialized to 0 to store the total amount of trapped water.
// Processing Each Element:

// Index 0, Height 0:

// Stack is empty, so push index 0 onto the stack.
// st = {0}.
// Index 1, Height 1:

// Stack is not empty, and a[st.top()] (which is 0) is less than a[1] (which is 1).
// Pop index 0 from the stack, cur = 0.
// Stack becomes empty, so no calculation is done.
// Push index 1 onto the stack.
// st = {1}.
// Index 2, Height 0:

// Stack is not empty, and a[st.top()] (which is 1) is greater than a[2] (which is 0).
// Push index 2 onto the stack.
// st = {1, 2}.
// Index 3, Height 2:

// Stack is not empty, and a[st.top()] (which is 0) is less than a[3] (which is 2).
// Pop index 2 from the stack, cur = 2.
// Stack is not empty, so calculate trapped water:
// diff = 3 - 1 - 1 = 1 (width between index 3 and index 1).
// height = min(a[1], a[3]) - a[cur] = min(1, 2) - 0 = 1.
// ans += height * diff = 1 * 1 = 1.
// st = {1}.
// Continue processing, a[st.top()] (which is 1) is less than a[3] (which is 2).
// Pop index 1 from the stack, cur = 1.
// Stack becomes empty, so no further calculation.
// Push index 3 onto the stack.
// st = {3}.
// Index 4, Height 1:

// Stack is not empty, and a[st.top()] (which is 2) is greater than a[4] (which is 1).
// Push index 4 onto the stack.
// st = {3, 4}.
// Index 5, Height 0:

// Stack is not empty, and a[st.top()] (which is 1) is greater than a[5] (which is 0).
// Push index 5 onto the stack.
// st = {3, 4, 5}.
// Index 6, Height 1:

// Stack is not empty, and a[st.top()] (which is 0) is less than a[6] (which is 1).
// Pop index 5 from the stack, cur = 5.
// Stack is not empty, so calculate trapped water:
// diff = 6 - 4 - 1 = 1.
// height = min(a[4], a[6]) - a[cur] = min(1, 1) - 0 = 1.
// ans += height * diff = 1 * 1 = 1.
// st = {3, 4}.
// Continue processing, a[st.top()] (which is 1) is equal to a[6] (which is 1).
// Push index 6 onto the stack.
// st = {3, 4, 6}.
// Index 7, Height 3:

// Stack is not empty, and a[st.top()] (which is 1) is less than a[7] (which is 3).
// Pop index 6 from the stack, cur = 6.
// Stack is not empty, so calculate trapped water:
// diff = 7 - 4 - 1 = 2.
// height = min(a[4], a[7]) - a[cur] = min(1, 3) - 1 = 0.
// height is 0, so no water is trapped here.
// st = {3, 4}.
// Continue processing, a[st.top()] (which is 1) is less than a[7] (which is 3).
// Pop index 4 from the stack, cur = 4.
// Stack is not empty, so calculate trapped water:
// diff = 7 - 3 - 1 = 3.
// height = min(a[3], a[7]) - a[cur] = min(2, 3) - 1 = 1.
// ans += height * diff = 1 * 3 = 3.
// st = {3}.
// Continue processing, a[st.top()] (which is 2) is less than a[7] (which is 3).
// Pop index 3 from the stack, cur = 3.
// Stack becomes empty, so no further calculation.
// Push index 7 onto the stack.
// st = {7}.
// Index 8, Height 2:

// Stack is not empty, and a[st.top()] (which is 3) is greater than a[8] (which is 2).
// Push index 8 onto the stack.
// st = {7, 8}.
// Index 9, Height 1:

// Stack is not empty, and a[st.top()] (which is 2) is greater than a[9] (which is 1).
// Push index 9 onto the stack.
// st = {7, 8, 9}.
// Index 10, Height 2:

// Stack is not empty, and a[st.top()] (which is 1) is less than a[10] (which is 2).
// Pop index 9 from the stack, cur = 9.
// Stack is not empty, so calculate trapped water:
// diff = 10 - 8 - 1 = 1.
// height = min(a[8], a[10]) - a[cur] = min(2, 2) - 1 = 1.
// ans += height * diff = 1 * 1 = 1.
// st = {7, 8}.
// Push index 10 onto the stack.
// st = {7, 8, 10}.
// Index 11, Height 1:

// Stack is not empty, and a[st.top()] (which is 2) is greater than a[11] (which is 1).
// Push index 11 onto the stack.
// st = {7, 8, 10, 11}.
// Summary of Calculations:
// Index 3: Added 1 unit of water.
// Index 6: Added 1 unit of water.
// Index 7: Added 3 units of water.
// Index 10: Added 1 unit of water.
// Total Trapped Water:
// The total trapped water is the sum of the trapped water at each step:

// 1 + 1 + 3 + 1 = 6.

// So, the total amount of trapped water is 6 units