#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    int x;
    cout << "enter the root element" << " : ";
    cin >> x;
    int first;
    int second;
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);
    // build the bt
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "enter the left value of" << temp->data << " : ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout << "Enter the right value of" << temp->data << " : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    return 0;
}