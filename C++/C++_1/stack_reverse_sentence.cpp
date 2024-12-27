#include <bits/stdc++.h>

using namespace std;

void reversesentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{

    string s = "Hey, how are you doing?";
    reversesentence(s);

    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// void reversesentence(string s)
// {
//     stack<string> st;
//     string word = "";

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             word += s[i];
//         }
//         else if (word != "")
//         {
//             st.push(word);
//             word = "";
//         }
//     }
//     if (word != "")
//     {
//         st.push(word);
//     }

//     while (!st.empty())
//     {
//         cout << st.top();
//         st.pop();
//         if (!st.empty())
//         {
//             cout << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     string s = "hey, how are you doing";
//     reversesentence(s);

//     return 0;
// }
