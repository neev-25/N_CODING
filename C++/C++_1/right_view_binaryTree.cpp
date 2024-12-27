#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void rightview(Node *root) // void leftview(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++) // for leftview i=1;i<=n
        {
            Node *curr = q.front();
            q.pop();
            if (i == n - 1) // for leftview i==1
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    rightview(root); // leftview(root);
    return 0;
}
/*
            1
           / \
         2     5
        / \   /  \
       3   4  6   7
*/